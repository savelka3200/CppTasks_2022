//task 14.18

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void func(const char* filename1, const char* filename2,int N) {
    ofstream F2;
    ifstream F1;
    F1.open("C:\\Users\\USER\\CLionProjects\\university_course_c++\\16_11.05\\file1.txt", ios::in);
    F2.open("C:\\Users\\USER\\CLionProjects\\university_course_c++\\16_11.05\\file2.txt", ios::out);

    string min_str;
    string max_str;
    int min_len=1000;
    int max_len=0;
    char value;
    int k = 1;
    while (k<N) {
        string str;
        getline(F1, str);
        int len = str.length();
        if (len > max_len) {
            max_len = len;
            max_str = str;
        }
        if (len < min_len) {
            min_len = len;
            min_str = str;
        }
        k++;
    }
    F2 << "max string: " << max_str << endl;
    F2 << "min string: " << min_str << endl;

    F1.close();
    F2.close();

}

int main() {
    func("file1.txt", "file2.txt",5);
    return 0;
}
