// task 12.1

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << std::fixed << "x^y = " << pow(x, y) << endl;
    cout << std::scientific << "x^y = " << pow(x, y);

    return 0;
}