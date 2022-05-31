
#include <stdio.h>

#include "11_4.c"

int read_from_file(const char* fname){
    FILE * fp = fopen(fname, "rb");
    if(fp==NULL){
        printf( "file %s cannot be open for reading", fname);
        return 0;
    }
    double x;

    do{
        int r = fread(&x,sizeof(x),1,fp);
        if(r!=1) break;
        printf("%f",x);
    }while(1);

    fclose(fp);
}

int main(int argc, char **argv){

    /*char fnameF[]="task2f.dat";
    char fnameG[]="task2g.dat";
    double a;
    printf("a=");
    scanf("%lf",&a);

    write_reals_to_file(fnameF); // create file of reals
    write_limit_reals_to_file(fnameF, fnameG, a); //fromF to G with limit a
    read_from_file(fnameG);
    read_from_file(fnameF);*/

    writeRects("rect.dat");
    findMaxRect("rect.dat");
    return 0;
}



