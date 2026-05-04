#include <iostream>
using namespace std;9

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n; 

    int i = 1; // Starting number
    while (i <= n) {
        // Check if i is divisible by 2
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++; // Increment counter
    }

    return 0;
}
