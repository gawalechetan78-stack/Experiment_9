
#include <iostream>

using namespace std;

int main() {
    char str[100];
    char *str_ptr = str;

    cout << "Enter a string: ";
    cin >> str;
    
    while(*str_ptr != '\0') {
        cout << *str_ptr;
        str_ptr++;
    }

    cout << endl;
    return 0;
}

/* Output

Enter a string: Hello,World! 
Hello,World!

*/
