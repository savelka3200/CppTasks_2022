// task 12.2

#include <iostream>
#include <cstring>

using namespace std;

const int N = 10;

int main(){
    char str[10];
    unsigned long long sums = 0L;
    unsigned long long x;
    //size_t err;
    char* err;
    while(cin.get(str,N)){
        // int x = atoi(str);
        // C++11: stroull
        x = strtoull(str,&err,N);
        sums += x;
    }

    cout<<"sum ="<<sums<<"\n";
}

