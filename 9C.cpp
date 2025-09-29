
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    int *a_ptr = &a;
    int *b_ptr = &b;

    cout << "Value at pointer 1 is " << *a_ptr << endl;
    cout << "Value at pointer 2 is " << *b_ptr << endl;
    cout << "The difference between the value of the pointers is " << *a_ptr - *b_ptr << endl;
    
    return 0;
}

/* Output

Value at pointer 1 is 10
Value at pointer 2 is 5
The difference between the value of the pointers is 5

*/
