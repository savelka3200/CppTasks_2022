//task 3g

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>

#pragma warning(disable : 4996)


int write_to_file(const char* fnameF) {
    FILE* fp = fopen(fnameF, "wb");
    if (fp == NULL) {
        printf("Error opening %s", fnameF);
        return -1;
    }
    int tmp = 0;
    int ch;
    while (true) {
        fwrite(&tmp, sizeof(tmp), 1, fp);
        tmp += 1;
        //printf("%d", tmp);
        if (kbhit()) {
            ch = getch();
            if (ch == '0')
                break;
        }
    }

    fclose(fp);
    return 0;
}

bool isprime(int num) {
    if (ceil((int)sqrt(num)) == floor((int)sqrt(num))) {
        int n = sqrt(num);
        for (int i = 2; i < int(sqrt(n) + 1); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
}

int write_primes_to_file(const char* fnameF, const char* fnameG) {
    FILE* Fp = fopen(fnameF, "rb");
    if (Fp == NULL) {
        printf("Error opening %s", fnameF);
        return -1;
    }
    FILE* Gp = fopen(fnameG, "wb");
    if (Gp == NULL) {
        printf("Error opening %s", fnameG);
        return -2;
    }
    int tmp;
    do {
        int res = fread(&tmp, sizeof(tmp), 1, Fp);
        if (res != 1) {
            break;
        }
        if (isprime(tmp) == true) {
            fwrite(&tmp, sizeof(tmp), 1, Gp);
        }
    } while (!feof(Fp));
    fclose(Fp);
    fclose(Gp);
}

void read_file(const char* fname) {
    FILE* fp = fopen(fname, "rb");
    if (fp == NULL) {
        printf("file %s cannot be opened for reading", fname);
        return;
    }

    int x;
    do {
        int r = fread(&x, sizeof(x), 1, fp);
        if (r != 1) break;
        printf("%d", x);
    } while (1);

    fclose(fp);
}

int main(int argc, char** argv) {

    char fnameF[] = "task3f.dat";
    char fnameG[] = "task3g.dat";

    write_to_file(fnameF);
    write_primes_to_file(fnameF, fnameG);
    read_file(fnameG);
}

