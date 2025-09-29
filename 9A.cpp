
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int *a_ptr = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << a_ptr << endl;
    cout << *a_ptr << endl;

    return 0;
}

/* Output

10
0x7ffd599af0dc
0x7ffd599af0dc
10

*/
