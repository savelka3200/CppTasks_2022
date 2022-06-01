//task 11.12б

#include <iostream>
#include <fstream>

using namespace std;

struct Toy{
    char toyName[25];
    double toyPrice;
    int minAge;
    int maxAge;
};

int main(){

    size_t toys_size = 4;
    Toy toys[] = {
            {"Tennis racket", 1250.75, 7, 99},
            {"Baseball bat", 550.55, 12, 99},
            {"Puppet", 1500.0, 5, 9},
            {"Constructor", 2020.220, 5, 15}
    };

    //Save toys

    FILE* f1 = fopen("toys.dat", "wb+");

    cout<<"Writing data to file..."<<endl;
    fwrite(&toys, sizeof(Toy)*toys_size, 1, f1);

    fclose(f1);

    FILE* f2 = fopen("toys.dat", "r");

    cout<<"Reading data from file..."<<endl;
    Toy toys_read[toys_size];

    fread(&toys_read, sizeof(Toy)*toys_size, 1, f2);

    fclose(f2);

    int n,m;
    cout<<"Input n (for age n or m): ";
    scanf("%d",&n);
    cout<<"Input m: ";
    scanf("%d",&m);

    if (n<0 | m<0) return 0;

    printf("\nToys, that match for both age %d and %d:\n",n,m);
    for (int i=0; i<toys_size; i++){
        Toy toy = toys_read[i];
        if (n<toy.minAge || m<toy.minAge ||
            n>toy.maxAge || m>toy.maxAge){
            continue;
        }
        cout<<"    "<<toy.toyName<<endl;
    }
    return 0;
}

