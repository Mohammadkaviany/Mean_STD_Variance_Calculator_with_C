#include <stdio.h>


int main(){
    int i = 0;
    //char c;
    char a[4995];
    FILE *f;
    int len = 10 ;//sizeof(a) / sizeof(a[0]);
    f = fopen("G:/Programming/C & bash/Mean_STD_Variance_Calculator_with_C/1.txt", "r");
    float c = fgetc(f);

    while (c != EOF){
        printf("%c", c);
        c = fgetc(f);
    }





    //for(i = 0 ; i < len ; i++) {
        //printf("%c\n", c);
        //s = fgetc(f);
        //fscanf(f, "%s", &a[i]);

    //}
    fclose(f);
    //for (i = 0 ; i < len; i++){
        //printf("%f\n", a[i]);
    //}
}





























/*
int main(){
    int i, a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int sum = 0;
    for (i = 0; i<5 ; i++){
        sum += a[i];
        //b[i] = a[i];
        printf("%d\n", sum);

    }

    

    }*/