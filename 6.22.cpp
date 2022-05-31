//task 6.22

#include <iostream>
#include <bitset>

using namespace std;

int main()(){
    int32_t n;
    int32_t k;

    cout<<"Input 32-bit number (n): ";

    scanf("%d",&n);

    cout<<"Input number (0<=k<=32): ";

    scanf("%d",&k);

    if (k<0 | k>32) return;

    int filter = ~0; //0b 11111111 11111111 11111111 11111111
    filter>>=k;
    filter<<=k;

    std::cout<<"n: "<<bitset<32>(n)<<endl;
    n = n | filter;
    std::cout<<"Output: "<<bitset<32>(n)<<endl;
    return 0;
}


