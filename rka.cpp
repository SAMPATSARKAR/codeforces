#include <bits/stdc++.h>
using namespace std;

void rabinKarp(string text, string pattern) {

    int n = text.length();
    int m = pattern.length();

    if (m > n) {
        return;
    }

    // Base for hashing
    const int d = 256;

    // Prime modulus
    const int q = 10e9+7;

    int patternHash = 0;
    int windowHash = 0;

    // caluclate -> d^(m-1) % q
    int h = 1;

    for (int i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    // Calculate initial hash
    for (int i = 0; i < m; i++) {
        patternHash = (d * patternHash + pattern[i]) % q;
        windowHash = (d * windowHash + text[i]) % q;
    }

    // Slide pattern over text
    for (int i = 0; i <= n - m; i++) {

        // Hashes match
        if (patternHash == windowHash) {

            // Verify characters to handle collision
            bool match = true;

            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }

            if (match) {
                cout << "Pattern found at index: " << i << endl;
            }
        }

        // Calculate hash for next window
        if (i < n - m) {

            windowHash =
                (d * (windowHash - text[i] * h)
                + text[i + m]) % q;

            // Make hash positive
            if (windowHash < 0) {
                windowHash += q;
            }
        }
    }
}

int main() {

    string text = "ABCCDDAEFGABCD";
    string pattern = "ABCD";

    rabinKarp(text, pattern);

    return 0;
}

