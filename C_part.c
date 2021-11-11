#include <stdio.h>
#include <stdlib.h>


float Mean(long double *x, int size)
{
    float mean;
    int i;
    float sum = 0;
    for (i = 0; i < size; ++i)
    {
        sum += x[i];
    }
    mean = sum / size;
    printf("Mean value is : %f\n", mean);
    return mean;
}

int main()
{
    float mean;
    char str_data[4995];
    int i = 0;
    long double a[4995];
    int size = sizeof(a) / sizeof(a[0]);
    
    FILE * file;
    file = fopen("G:/Programming/C & bash/Mean_STD_Variance_Calculator_with_C/related_data/1.txt", "r+");

    while (!feof(file))
    {
        fgets(str_data, 4995, file);
        a[i] = atof(str_data);
        i++;
    }
    fclose(file);

    Mean(a, size);
    printf("%s", "hello");
}