// task 10.5

#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>

#define LEN_NAME 255
#define MAX_MAS 100

typedef struct{
    char name[LEN_NAME];
    int height;
} Mount;

bool inputMount(Mount* x){
    printf("Mount name:");
    scanf(" %s",x->name);
    printf("Mount height:");
    scanf(" %d",&x->height);
    return true;
}

void outputMount(const Mount* x){
    printf("Mount %s of height %d",x->name,x->height);
}

const char* maxHeightName(const Mount* arr, size_t n){

    if(n==0) return "No mountains";

    int maxh = arr[0].height;
    int indexMax = 0;

    for(int i=1;i<n;i++){
        if(arr[i].height>maxh){
            maxh = arr[i].height;
            indexMax = i;
        }
    }
    return arr[indexMax].name;
}

void heightbyName(const Mount* arr, size_t n, const char* mount_name){
    printf("%s",mount_name);
    bool isFound = false;
    for(int i=0;i<n;i++){

        if(strcmp(arr[i].name,mount_name)==0){
            printf("Mount %s has height %d",mount_name,arr[i].height);
            isFound = true;
            break;
        }
    }

    if(!isFound){
        printf("There is no mountains %s!\n",mount_name);
    }
}

int main(){
    /*Mount m;
    inputMount(&m);
    outputMount(&m);*/

    Mount test[MAX_MAS] = { {"K2",8676},{"Everest", 8878},{"Hill",1234}};

    printf("%s", maxHeightName(test,3));

    heightbyName(test,3,"Coverla");
    heightbyName(test,3,"K2");
    heightbyName(test,3,"Hill");

    Mount mnt[MAX_MAS];
    size_t n;
    printf("Input n=");
    scanf(" %zu", &n);
    for(size_t i=0;i<n;i++){
        inputMount(&mnt[i]);
    }
    printf("%s\n", maxHeightName(mnt,n));

    printf("name:");
    char mname[LEN_NAME];
    fgets(mname,LEN_NAME,stdin);
    heightbyName(mnt,n,mname);
}
