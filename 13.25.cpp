#include <iostream>
#include <string>
using namespace std;


int main() {
    string s = "adsda  ,  yiyui zxccovxcv: z poiojlp /,    xcvvvoocx. ! igy  ";
    string vowels = "aoeiuy";
    int number[6];
    int count = 0;
    for (int i = 0; i < vowels.length(); i++) {
        for (int j = 0; j < s.length(); j++){
            if (vowels[i] == s[j]){
                count++;
            }
        }
        number[i] = count;
        count = 0;
    }
    int max = 0;
    string maxstr;
    for (int i = 0; i < vowels.length(); i++){
        if (number[i] > max){
            max = number[i];
            maxstr = vowels[i];
        }
    }
    cout << "The most popular vowel: " << maxstr << endl;

    return 0;
}
