

#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(int);

    int *ptr = arr + size - 1;

    for(int i = 0; i < size; i++) {
        cout << *ptr << "\t";
        ptr--;
    }

    cout << endl;
    
    return 0;
}

/* Output

50      40      30      20      10

*/
