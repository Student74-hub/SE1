//
// This program is just an example one under VCS.
// Author: Vasiliy, 2025.
//
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << static_cast<double>(a) / b << '\n';
    return 0;
}