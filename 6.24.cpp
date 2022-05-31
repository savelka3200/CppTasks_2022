//task 6.24

#include <iostream>
#include <bitset>

using namespace std;

int main () {
    int32_t a = 33889;
    cout << bitset<32>(a) << endl;
    int i = 0;
    while (1) {
        if (a == 0) {
            break;
        }
        a = a >> 1;
        i++;
    }
    cout << " Result : " << i << endl;
    return 0;
}
