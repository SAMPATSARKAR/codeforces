#include <iostream>
using namespace std;

int fun() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3)
            return i;

        cout << i << " ";
    }

    return 0;
}

int main() {
    cout << fun();
}