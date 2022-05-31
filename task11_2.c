#include <stdio.h>
#include <math.h>

#define EPS 0.0000001

int write_reals_to_file(const char * fnameF){

    FILE* fp = fopen(fnameF, "wb");
    if(fp==NULL){
        printf("Error opening &s", fnameF);
        return -1;
    }

    double tmp;
    do{
        printf("x=");
        scanf("%lf",&tmp);
        if(fabs(tmp)<EPS) break;
        fwrite(&tmp,sizeof(tmp),1,fp);
    }while(1);

    fclose(fp);
    return 0;
}

int write_limit_reals_to_file(const char *fnameF, const char* fnameG, double a){

    FILE * Fp = fopen(fnameF,"rb");
    if(Fp==NULL){
        printf("Error opening &s", fnameF);
        return -1;
    }

    FILE * Gp = fopen(fnameG,"wb");
    if(Gp==NULL){
        printf("Error opening &s", fnameG);
        return -2;
    }

    FILE * Hp = fopen("tempfile.dat","wb");

    double tmp;
    do{
        int res = fread(&tmp,sizeof(tmp),1,Fp);
        if(res!=1){
            break;
        }
    if(fabs(tmp)<a){
        fwrite(&tmp,sizeof(tmp),1,Gp);
        }
    else{
        fwrite(&tmp,sizeof(tmp),1,Hp);
    }
    }while(!feof(Fp));

    fclose(Fp);
    fclose(Gp);
    fclose(Hp);

    rename("tempfile.dat",fnameF);

}

