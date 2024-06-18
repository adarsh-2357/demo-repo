#include <bits/stdc++.h>
using namespace std;

// Function to swap by value
void swapbyValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to swap by reference
void swapbyReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    
    cout << "Enter numbers to be swapped!\n";
    cin >> a >> b;

    cout << "---SWAP BY VALUE---\n";
    cout << "Value before swap:\n";
    cout << "a: " << a << " " << "b: " << b << endl;
    swapbyValue(a, b);
    cout << "Value after swap:\n";
    cout << "a: " << a << " " << "b: " << b << endl;  // No change expected

    cout << "---SWAP BY REFERENCE---\n";
    cout << "Value before swap:\n";
    cout << "a: " << a << " " << "b: " << b << endl;
    swapbyReference(a, b);
    cout << "Value after swap:\n";
    cout << "a: " << a << " " << "b: " << b << endl;  // Values should be swapped

    return 0;
}
