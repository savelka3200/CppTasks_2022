//task 10.13гд

#include <iostream>
#include <string>

using namespace std;

struct Person {
    string surname;
    string name;
    string sex;
    int day;
    int month;
    int year;
};

void print(Person a) {
    cout << endl;
    cout << "Фамилия имя: " << a.surname << " " << a.name << endl;
    cout << "Пол: " << a.sex << endl;
    cout << "Дата рождения: " << a.day << "." << a.month << "." << a.year << endl;
}

int count_age(Person a) {
    int day_t = 19;
    int month_t = 10;
    int year_t = 2021;
    //int avg = 0;
    int age = year_t - a.year;
    if (a.month >= month_t) {
        if (a.month == month_t) {
            if (a.day <= day_t) age -= 1;
        }
        else age -= 1;
    }
    return age;
}

void Old_employees(Person* arr, int n, int p_m, int p_f) {
    for (int i = 0; i < n; i++) {
        if (arr[i].sex == "M") {
            if (count_age(arr[i]) >= p_m) {
                print(arr[i]);
                cout << "Ему больше " << p_m << " лет, а именно: " << count_age(arr[i]) << endl;
            }
        }
        else {
            if (count_age(arr[i]) >= p_f) {
                print(arr[i]);
                cout << "Ей больше " << p_f << " лет, а именно: " << count_age(arr[i]) << endl;
            }
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 4;
    Person* arr = new Person[n];
    Person a = { "A","AA","F", 25, 6, 1993 };
    Person b = { "B","BB", "M", 16, 11, 1993 };
    Person c = { "C", "CC", "F", 21, 1, 1995 };
    Person d = { "D", "DD", "M", 30, 4, 2000 };
    Person oldest=a;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    int old_age = count_age(a);
    for (int i = 0; i < n; i++) {
        print(arr[i]);
    }
    int avg = 0;
    for (int i = 0; i < n; i++) {
        avg += count_age(arr[i]);
    }
    //пункт г
    for (int i = 1; i < n; i++)
    {
        if (count_age(arr[i]) > old_age) {
            old_age = count_age(arr[i]);
            oldest = arr[i];
        }

    }
    avg = avg / n;
    cout << endl;
    cout << "Сотрудники, возраст которых меньше среднего: " << endl;
    for (int i = 0; i < n; i++) {
        if (count_age(arr[i]) < avg) {
            print(arr[i]);
            cout << "Возраст : " << count_age(arr[i]) << endl;
        }
    }


    int p_m, p_f;
    cout << endl;
    cout << "Введите пенсионный возраст для мужчин и женщин: ";
    cin >> p_m >> p_f;
    cout << endl;
    cout << "Сотрудники, которым пора на пенсию: " << endl;
    Old_employees(arr, n, p_m, p_f);

    return 0;
}

