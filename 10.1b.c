// task 10.1b

#include <stdio.h>
#include <stdbool.h>

typedef struct ChessField{
    char vert;
    unsigned char hor;
}ChessField;

void outputCF(ChessField d){
    printf("%c%hhu:\n",d.vert,d.hor);
}

bool inputCF(ChessField* d){
    printf("input Chess Field");
    scanf("%c",&d->vert);
    scanf("%hhu",&d->hor);
    if(d->vert>='a' && d->vert<='h' && d->hor>='1' && d->hor<='8'){
        return true;
    }
    d->vert=0;
    d->hor=0;
    return false;
}

int main(){

    ChessField cf;

    if(inputCF(&cf))
        outputCF(cf);
}
