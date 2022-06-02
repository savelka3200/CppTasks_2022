//task 8.31

#include <iostream>

using namespace std;

int main(){
    int n,m;
    cout<<"m:"<<endl;
    cin>>n;
    cout<<"n:"<<endl;
    cin>>m;
    bool fExit, fExchange;
    double arr[n][m];
    double sort_1[n][m];
    double sort_2[n][m];
    double sort_3[n][m];
    for (int i = 0 ; i<n;i++){
        for(int j = 0;j<m;j++){
            double a ;
            cout<<"Enter{"<<i+1<<"}{"<<j+1<<"} element"<<endl;
            cin>>a;
            arr[i][j] = a;
            sort_1[i][j]= a;
            sort_2[i][j]= a;
            sort_3[i][j]= a;
        }

    }

    //SORTING_1


    for (int i = 0; i < n; i++)
    {
        fExit = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            fExchange = false;
            for (int k = 0; k < m; k++)
            {
                if (sort_1[j][k] > sort_1[j + 1][k])
                {
                    fExchange = true;
                    break;
                }
                else if (sort_1[j][k] < sort_1[j + 1][k])
                    break;
            }
            if (fExchange)
            {
                for (int k = 0; k < m; k++)
                {
                    double tmp = sort_1[j][k];
                    sort_1[j][k] = sort_1[j + 1][k];
                    sort_1[j + 1][k] = tmp;
                }
                fExit = false;
            }
        }
        if (fExit)
            break;
    }

    for(int i = 0 ;i < n ; i++){
        for(int j = 0;j<m;j++){
            cout<<sort_1[i][j]<<" ";
        }
        cout<<endl;
    }
    // SORTING 2

    double arr_buf[10];
    double s_now = 0, s_prev=0;

    for(int z=0; z<m; z++)
    {
        double * ptr_arr=&sort_2[z][0];
        for (int i = z; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                s_prev += *ptr_arr;
                s_now += sort_2[i][j];
            }
            if(s_prev > s_now)
            {
                for(int k=0; k<n; k++)
                {
                    arr_buf[k]=sort_2[i][k];
                    sort_2[i][k]=*ptr_arr;
                    *ptr_arr=arr_buf[k];
                    ptr_arr++;
                }
                ptr_arr-=n;
            }
            s_now=0;
            s_prev=0;
        }
    }

    cout<<"========="<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout<<sort_2[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}