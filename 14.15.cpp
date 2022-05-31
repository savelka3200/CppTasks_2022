//task 14.15

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int isInteger(const string & s){
   if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return 0;

   char * p;
   strtol(s.c_str(), &p, 10);

   return (*p == 0);
}

string toBinary(const string s){
    int n = atoi(s.c_str());
    string number;

    bool negative = (n < 0);
    if (negative)
        n = -n;
    do
    {
        number += char('0' + n % 2);
        n = n / 2;
    } while (n > 0);

    if (negative)
        number += '-';
    return string(number.crbegin(), number.crend());
}


int main (){
    /* file.txt :
        -15.5 6 6ds
        asd 4a6
        a + a7s
        7 d 56.89 -18
    */
    string filename = "file.txt";

    ifstream fin(filename);
    if (!fin.good()) exit(1);
    string line, ss;
    vector<vector<string>> vec;
    while (getline(fin, line)){
        vector<string> v;
        for(int i = 0; i < line.size(); i++){
            if (line[i] != ' ') ss += line[i];
            if (line[i] == ' ' || i == line.size()-1){
                v.push_back(ss);
                ss = "";
            }
        }
        vec.push_back(v);
    }
    fin.close();
    cout << endl;
    for(int i = 0; i < vec.size(); i++){
        for (int j = 0; j < vec[i].size(); j++){
            if (isInteger(vec[i][j]))
                vec[i][j] = toBinary(vec[i][j]);
        }
    }

    ofstream fout(filename);
    if (!fout.good()) exit(1);
    else{
        for(auto i: vec){
            for (auto j: i)
                fout << j << " ";
            fout << endl;
        }
    }
    vec.clear();
    fout.close();
    return 0;
}
