#include<bits/stdc++.h>
using namespace std;

// long long ব্যবহার করা ভালো অভ্যাস, বিশেষ করে SOD-এর জন্য
using ll = long long; 

const int N = 1e6 + 9;

// --- আপনার SPF Sieve টেমপ্লেট ---
int spf[N];
vector<int> primes;

void sieve() {
    for (int i = 2; i < N; i++) {
        spf[i] = i; // শুরুতে প্রত্যেকেই নিজের spf
    }
    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) { // i যদি মৌলিক হয়
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) { // শুধু প্রথমবার আপডেট করবো
                    spf[j] = i;
                }
            }
        }
    }
    // (প্রয়োজনে) প্রাইম লিস্ট তৈরি করা
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            primes.push_back(i);
        }
    }
}
// --- Sieve টেমপ্লেট শেষ ---


/**
 * ফাংশন ১: get_nod(n) - Number of Divisors
 * ----------------------------------------
 * উদ্দেশ্য: n সংখ্যাটির মোট কতগুলো ভাজক (divisor) আছে তা বের করা।
 * ফর্মুলা: n = p1^a1 * p2^a2 * ...
 * NOD(n) = (a1 + 1) * (a2 + 1) * ...
 * টাইম কমপ্লেক্সিটি: O(log n)
 */
int get_nod(int n) {
    int nod = 1;
    while (n > 1) {
        int p = spf[n]; // ক্ষুদ্রতম মৌলিক উৎপাদক
        int count = 0;
        // p উৎপাদকটি কতবার আছে তা গণনা করি
        while (n % p == 0) {
            n /= p;
            count++;
        }
        // (count + 1) দিয়ে গুণ করি
        nod = nod * (count + 1);
    }
    return nod;
}


/**
 * ফাংশন ২: get_sod(n) - Sum of Divisors
 * ---------------------------------------
 * উদ্দেশ্য: n সংখ্যাটির সকল ভাজকের যোগফল বের করা।
 * ফর্মুলা: n = p1^a1 * p2^a2 * ...
 * SOD(n) = (1+p1+...+p1^a1) * (1+p2+...+p2^a2) * ...
 * টাইম কমপ্লেক্সিটি: O(log n)
 * দ্রষ্টব্য: যোগফল int-এর সীমা ছাড়িয়ে যেতে পারে, তাই long long ব্যবহার করুন।
 */
ll get_sod(int n) {
    ll sod = 1;
    while (n > 1) {
        int p = spf[n];
        int count = 0;
        while (n % p == 0) {
            n /= p;
            count++;
        }

        // (1 + p + p^2 + ... + p^count) অংশটি গণনা করি
        ll current_sum = 1;
        ll p_power = 1;
        for (int i = 0; i < count; i++) {
            p_power = p_power * p;
            current_sum = current_sum + p_power;
        }

        sod = sod * current_sum;
    }
    return sod;
}


/**
 * ফাংশন ৩: get_phi(n) - Euler's Totient Function
 * ---------------------------------------------
 * উদ্দেশ্য: n-এর থেকে ছোট বা সমান এবং n-এর সাথে co-prime
 * (যাদের গ.সা.গু ১) এমন সংখ্যার পরিমাণ বের করা।
 * ফর্মুলা: n = p1^a1 * p2^a2 * ...
 * Phi(n) = n * (1 - 1/p1) * (1 - 1/p2) * ...
 * বা, Phi(n) = n * (p1-1)/p1 * (p2-1)/p2 * ...
 * টাইম কমপ্লেক্সিটি: O(log n)
 */
int get_phi(int n) {
    int phi = n;
    while (n > 1) {
        int p = spf[n];
        
        // ফর্মুলা অংশ (p-1)/p দিয়ে গুণ করি
        phi = phi / p * (p - 1);

        // n থেকে p-এর সকল ঘাত (power) সরিয়ে ফেলি
        while (n % p == 0) {
            n /= p;
        }
    }
    return phi;
}


// --- কীভাবে ব্যবহার করবেন ---

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // !! সবচেয়ে গুরুত্বপূর্ণ !!
    // প্রোগ্রাম শুরুর প্রথমেই একবার sieve() কল করে spf[] অ্যারে পূরণ করতে হবে।
    sieve();

    // --- উদাহরণ ১: একটি নির্দিষ্ট সংখ্যার জন্য সব বের করা ---
    int x = 60; // 60 = 2^2 * 3^1 * 5^1

    cout << "--- Details for " << x << " ---" << '\n';
    
    // NOD(60) = (2+1) * (1+1) * (1+1) = 3 * 2 * 2 = 12
    cout << "Number of Divisors (NOD): " << get_nod(x) << '\n'; 

    // SOD(60) = (1+2+4) * (1+3) * (1+5) = 7 * 4 * 6 = 168
    cout << "Sum of Divisors (SOD): " << get_sod(x) << '\n'; 

    // Phi(60) = 60 * (1/2) * (2/3) * (4/5) = 16
    cout << "Euler's Totient (Phi): " << get_phi(x) << '\n';
    cout << "-----------------------" << '\n';


    // --- উদাহরণ ২: ICPC-তে যেভাবে ব্যবহার করবেন (Query handling) ---
    cout << "\nEnter number of queries (T): ";
    int t;
    cin >> t;
    while (t--) {
        cout << "Enter n: ";
        int n;
        cin >> n;
        cout << "NOD(" << n << ") = " << get_nod(n) << '\n';
        cout << "SOD(" << n << ") = " << get_sod(n) << '\n';
        cout << "Phi(" << n << ") = " << get_phi(n) << '\n';
        cout << '\n';
    }

    return 0;
}