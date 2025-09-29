

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int *a_ptr = &a;

    float b = 9.81f;
    float *b_ptr = &b;

    double c = 10.0123456789;
    double *c_ptr = &c;

    char d = 'A';
    char *d_ptr = &d;

    cout << "The address of " << *a_ptr << " is " << a_ptr << endl;
    cout << "The address of " << *b_ptr << " is " << b_ptr << endl;
    cout << "The address of " << *c_ptr << " is " << c_ptr << endl;
    cout << "The address of " << *d_ptr << " is " << d_ptr << endl;

    cout << endl;

    ++*a_ptr;
    ++*b_ptr;
    ++*c_ptr;
    ++*d_ptr;

    cout << *a_ptr << endl;
    cout << *b_ptr << endl;
    cout << *c_ptr << endl;
    cout << *d_ptr << endl;

    cout << endl;

    cout << "The address of " << *a_ptr << " is " << a_ptr << endl;
    cout << "The address of " << *b_ptr << " is " << b_ptr << endl;
    cout << "The address of " << *c_ptr << " is " << c_ptr << endl;
    cout << "The address of " << *d_ptr << " is " << d_ptr << endl;

    cout << endl;

    cout << "The size of " << *a_ptr << " is " << sizeof(*a_ptr) << " bytes" << endl;
    cout << "The size of " << *b_ptr << " is " << sizeof(*b_ptr) << " bytes" << endl;
    cout << "The size of " << *c_ptr << " is " << sizeof(*c_ptr) << " bytes" << endl;
    cout << "The size of " << *d_ptr << " is " << sizeof(*d_ptr) << " bytes" << endl;

    return 0;
}

/* Output

The address of 10 is 0x7ffe8f1a83d8
The address of 9.81 is 0x7ffe8f1a83dc
The address of 10.0123 is 0x7ffe8f1a83e0
The address of A is A


11
10.81
11.0123
B

The address of 11 is 0x7ffe8f1a83d8
The address of 10.81 is 0x7ffe8f1a83dc
The address of 11.0123 is 0x7ffe8f1a83e0
The address of B is B


The size of 11 is 4 bytes
The size of 10.81 is 4 bytes
The size of 11.0123 is 8 bytes
The size of B is 1 bytes

*/
