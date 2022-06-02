#include <iostream>
#include <list>
#include<ctime>
using namespace std;

class SaveNumbers {

public:
    list<double> save_numbers;

    SaveNumbers() = default;

    void add_num(double num) {
        save_numbers.push_back(num);
    }

    void delete_num(double num) {
        if (save_numbers.empty()) {
            throw logic_error("List is empty!");
        }
        save_numbers.remove(num);
    }

    double find_closest_num(double num) {
        if (save_numbers.empty()) {
            throw logic_error("List is empty!");
        }
        list<double>::iterator it = save_numbers.begin();
        double closest_num;
        closest_num = *it;
        while (it != save_numbers.end()) {
            if (abs(num - *it) < abs(num - closest_num)) {
                closest_num = *it;
            }
            it++;
        }
        return closest_num;
    }

    void print() {
        if (save_numbers.empty()) {
            throw logic_error("List is empty!");
        }
        list<double>::iterator it = save_numbers.begin();
        while (it != save_numbers.end()) {
            cout << *it << " ";
            it++;
        }
        cout << endl;
    }
};


int main() {
    srand(time(nullptr));

    SaveNumbers numbers;

    for (int i = 0; i < 10; i++) {
        numbers.add_num(rand() % 100);
    }
    numbers.print();

    double n;
    cout << "Enter n:  ";
    cin >> n;
    numbers.delete_num(n);
    cout << "List without n: " << endl;
    numbers.print();

    double d;
    cout << "Enter d:  ";
    cin >> d;
    cout << numbers.find_closest_num(d);
    return 0;
}
