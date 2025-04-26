#include<iostream>
#include<string>
using namespace std;

// Convert to binary string
string decToBin(int n) {
    if (n == 0) return "0";
    string result = "";
    while (n != 0) {
        result = to_string(n % 2) + result;
        n /= 2;
    }
    return result;
}

// Get number of bits required
int highestPositions(int n) {
    int temp = abs(n); // must take abs to work for negatives
    int positions = 0;
    while (temp != 0) {
        temp >>= 1;
        positions++;
    }
    return positions;
}

// Pad 1 or 0 at MSB
int paddingAtMsb(int n, int bit) {
    int positions = highestPositions(n);
    return (bit << positions) | n;
}

// Compute two's complement
int twosComplement(int n) {
    if (n >= 0) return n;

    int bits = highestPositions(n) + 1; // +1 for sign bit
    int mask = (1 << bits) - 1;         // full mask of ones, like 0b11111
    int absn = -n;

    int twos = (~absn + 1) & mask;
    return twos;
}

int main() {
    int n = -13;

    cout << "Original number: " << n << endl;

    // Binary before two's complement
    cout << "Binary (abs): " << decToBin(abs(n)) << endl;

    // Two's complement
    int twos = twosComplement(n);
    cout << "Two's complement (as unsigned): " << twos << endl;
    cout << "Binary two's complement: " << decToBin(twos) << endl;

    return 0;
}
