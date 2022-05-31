//task 12.8

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;
int main() {
    string line;
    ifstream in("C:\\Users\\USER\\CLionProjects\\university_course_c++\\13_27.04\\12.08\\12.08.txt");

    int counter = 0;
    if (in.is_open() ) {
        while (getline(in, line)) {
              counter +=1;
        }
    }
    in.close();
    ifstream in_1("C:\\Users\\USER\\CLionProjects\\university_course_c++\\13_27.04\\12.08\\12.08.txt");
    string *arr = new string [counter];
    int count = 0;
    if (in_1.is_open() ) {
        while (getline(in_1, line)) {
            double expp = exp(std::atoi(line.c_str()));
            float x = exp(std::atoi(line.c_str()));
            std::ostringstream ss;
            ss << x;
            std::string s(ss.str());
            cout<<x<<endl;

            cout<<s<<endl;
            arr[count] = line +" "+ s;
            cout<<arr[count]<<endl;
            count +=1;
        }
    }
    in.close();
    ofstream out;
    out.open("C:\\Users\\USER\\CLionProjects\\university_course_c++\\13_27.04\\12.08\\12.08.txt");
    for (int i = 0;i<count ; i ++){
        out << arr[i]<<endl;
    }
    out.close();
    return 0;
}