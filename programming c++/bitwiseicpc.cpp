#include <bits/stdc++.h>
using namespace std;

/*
 ============================================================
                BITWISE OPERATOR REFERENCE
 ============================================================
*/

// ================== 1. Basic Bitwise Operators ==================

// AND: দুইটাই 1 হলে ফল 1
inline int AND(int a, int b) { return a & b; }

// OR: যেকোনো একটাও 1 হলে ফল 1
inline int OR(int a, int b) { return a | b; }

// XOR: দুই bit আলাদা হলে 1
inline int XOR(int a, int b) { return a ^ b; }

// NOT: সব bit উল্টো করে
inline int NOT(int a) { return ~a; }

// Left Shift: 1 bit বামে সরালে মান ×2 হয়
inline int LSHIFT(int a, int k) { return a << k; }

// Right Shift: 1 bit ডানে সরালে মান ÷2 হয়
inline int RSHIFT(int a, int k) { return a >> k; }



/*
 ============================================================
                USEFUL BIT TRICKS
 ============================================================
*/

// x even নাকি odd?
inline bool isOdd(int x) { return x & 1; }

// kth bit set কি না check করা
inline bool isSet(int x, int k) { return x & (1 << k); }

// kth bit set করা
inline int setBit(int x, int k) { return x | (1 << k); }

// kth bit unset করা
inline int unsetBit(int x, int k) { return x & ~(1 << k); }

// kth bit toggle করা
inline int toggleBit(int x, int k) { return x ^ (1 << k); }

// lowest set bit return করা
inline int lowestSetBit(int x) { return x & -x; }

// lowest set bit remove করা
inline int removeLowestSetBit(int x) { return x & (x - 1); }

// কতগুলো bit set আছে?
inline int countBits(int x) { return __builtin_popcount(x); }

// trailing zeros (lowest 1-bit এর index)
inline int lowestBitIndex(int x) { return __builtin_ctz(x); }

// leading zeros (highest 1-bit থেকে distance)
inline int leadingZeros(int x) { return __builtin_clz(x); }

// power of two কিনা check করা
inline bool isPowerOfTwo(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}



/*
 ============================================================
                BITMASK OPERATIONS
 ============================================================
*/

// mask এ element i আছে কি না?
inline bool maskHas(int mask, int i) { return mask & (1 << i); }

// mask এ element i add করা
inline int maskAdd(int mask, int i) { return mask | (1 << i); }

// mask থেকে element i remove করা
inline int maskRemove(int mask, int i) { return mask & ~(1 << i); }

// mask এ element i toggle করা
inline int maskToggle(int mask, int i) { return mask ^ (1 << i); }

// mask এ কতগুলো element আছে?
inline int maskCount(int mask) { return __builtin_popcount(mask); }

// mask এর সর্বনিম্ন set bit
inline int maskLowestBit(int mask) { return mask & -mask; }

// mask এর highest set bit index
inline int maskHighestBitIndex(int mask) {
    return 31 - __builtin_clz(mask);
}



/*
 ============================================================
           ITERATION: Iterate all subsets of mask
 ============================================================
*/
void printSubsets(int mask) {
    cout << "Subsets of mask " << mask << ": ";
    for (int sub = mask; sub; sub = (sub - 1) & mask) {
        cout << sub << " ";
    }
    cout << "\n";
}

/*
 ============================================================
     ITERATION: Iterate all masks of size n (all subsets)
 ============================================================
*/
void printAllMasks(int n) {
    cout << "All Masks for n = " << n << ": ";
    for (int mask = 0; mask < (1 << n); mask++) {
        cout << mask << " ";
    }
    cout << "\n";
}



/*
 ============================================================
                        MAIN (Demo)
 ============================================================
*/

int main() {

    int x = 22; // 10110
    int y = 13; // 01101

    cout << "AND: " << (x & y) << "\n";
    cout << "OR: " << (x | y) << "\n";
    cout << "XOR: " << (x ^ y) << "\n";
    cout << "NOT x: " << (~x) << "\n";
    cout << "x << 1: " << (x << 1) << "\n";
    cout << "x >> 1: " << (x >> 1) << "\n";

    cout << "Is x odd? " << isOdd(x) << "\n";
    cout << "Is 2nd bit set in x? " << isSet(x, 2) << "\n";
    cout << "Set 1st bit: " << setBit(x, 1) << "\n";
    cout << "Unset 2nd bit: " << unsetBit(x, 2) << "\n";
    cout << "Toggle 0th bit: " << toggleBit(x, 0) << "\n";

    cout << "Lowest set bit of x: " << lowestSetBit(x) << "\n";
    cout << "x after removing lowest set bit: " << removeLowestSetBit(x) << "\n";
    cout << "Count bits in x: " << countBits(x) << "\n";
    cout << "Lowest bit index: " << lowestBitIndex(x) << "\n";
    cout << "Highest bit index: " << maskHighestBitIndex(x) << "\n";

    // Bitmask demo
    int mask = 0;
    mask = maskAdd(mask, 1);
    mask = maskAdd(mask, 3);
    mask = maskAdd(mask, 4);
    cout << "Mask: " << mask << "\n";

    cout << "Mask has 3? " << maskHas(mask, 3) << "\n";
    cout << "Mask after removing 3: " << maskRemove(mask, 3) << "\n";

    printSubsets(mask);
    printAllMasks(3);

    return 0;
}
