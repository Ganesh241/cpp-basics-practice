/*******************************************************
 * Title     : C++ Basics Practice Snippets
 * Author    : Ganesh Shinde
 * Platform  : GDB Online / Local (VS Code)
 * Description:
 *   A collection of small C++ programs demonstrating
 *   input/output handling, string operations, bitwise
 *   operations, ASCII, logical operators, and floating
 *   point precision issues.
 *******************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /***********************
     * 1. Character Input
     ***********************/
    // char ch;
    // cin.get(ch); // gets even spaces or newline characters
    // cout << "Character entered: " << ch << endl;


    /***********************
     * 2. Integer & String Input
     ***********************/
    // int x;
    // string name;
    // cin >> x; // reads integer
    // cin.ignore(); // clears the buffer before getline
    // getline(cin, name); // reads entire line with spaces
    // cout << "Number: " << x << endl;
    // cout << "Name: " << name << endl;


    /***********************
     * 3. Character Array
     ***********************/
    // char a[] = {'1', '4', '4', '\0'};
    // cout << "Size of array: " << sizeof(a) << endl;
    // cout << "Length (strlen): " << strlen(a) << endl;


    /***********************
     * 4. ASCII Value
     ***********************/
    // int z = 'a';
    // cout << "ASCII value of 'a': " << z << endl;


    /***********************
     * 5. Logical Operators
     ***********************/
    // int a = 5;
    // int b = 0;
    // if (++b && a)
    //     cout << "Condition True, b = " << b << endl;
    // else
    //     cout << "Condition False, a = " << a << endl;


    /***********************
     * 6. Bitwise Operations
     ***********************/
    // int num = 5;
    // cout << "Binary of num: " << bitset<32>(num) << endl;
    // cout << "Binary of ~num: " << bitset<32>(~num) << endl;
    // cout << "Value of ~num: " << ~num << endl;


    /***********************
     * 7. Floating Point Precision
     ***********************/
    double x = 0.3;
    double y = 0.1 * 3;

    cout << fixed << setprecision(17); // show full precision
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "Difference = " << fabs(x - y) << "\n";

    // Compare using epsilon
    if (fabs(x - y) < 1e-9)
        cout << "Result: equal" << endl;
    else
        cout << "Result: not equal" << endl;

    return 0;
}
