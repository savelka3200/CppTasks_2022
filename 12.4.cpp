// task 12.4

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    unsigned n;
    cout<<"n=";
    cin>>n;

    int* m = new int[n]; //dynamic array of size n

    for(unsigned i=0;i<n;i++){
        cin>>m[i];
    }

    double* x = new double[n];

    const char fname[] = "ddata.txt";
    fstream f;
    f.open(fname, fstream::in);
    if(f.bad()){
        cerr<<"error opening file "<<fname<<"\n";
        delete[] x;
        delete[] m;
        return 0;
    }

    unsigned k=0;
    double a;
    while(f>>a && k<n){
        x[k++] = a;
    }

    if(k!=n){
        cerr<<"read only"<<k<<"numbres but needed"<<n<<"!\n";
    }
    else{
        const char gname[] = "ddata2.txt";
        fstream g;
        g.open(gname, fstream::out);
        if(!f){
            cerr<<"error opening file "<<gname<<"\n";
            delete[] x;
            delete[] m;
            return 0;
        }
        for(unsigned i=0;i<n;i++){
            g<<pow(x[i],m[i])<<" ";
        }
        g.close();
    }
    f.close();

    delete[] x;
    delete[] m;
}