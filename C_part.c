#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    return mean;
}

float Variance(long double *x,int size,float mean)
{
    int i;
    float squares[4995];
    float sum_sq = 0 ;

    for (i = 0; i<size; ++i )
    {
        squares[i] = ( x[i] - mean ) * ( x[i] - mean );
        sum_sq += squares[i];
    }

    float variance = sum_sq / (size - 1);
    return variance;

}

float STD(float variance)
{
    float std = sqrt(variance);
    return std;
}

int main()
{
    float mean, variance, std;
    char str_data[4995];
    int i = 0;
    long double a[4995];
    int size = sizeof(a) / sizeof(a[0]);
    /*if (argc == 0)
    {
        printf(' Welcome to my app :)  ');
    }

    else
    {
*/
    
    FILE * file;
    file = fopen("G:/Programming/C & bash/Mean_STD_Variance_Calculator_with_C/related_data/1.txt", "r+");
    FILE * mean_f = fopen("G:/Programming/C & bash/Mean_STD_Variance_Calculator_with_C/related_data/mean.txt", "a");
    FILE * var_f = fopen("G:/Programming/C & bash/Mean_STD_Variance_Calculator_with_C/related_data/variance.txt", "a");
    FILE * std_f = fopen("G:/Programming/C & bash/Mean_STD_Variance_Calculator_with_C/related_data/STD.txt", "a");


    while (!feof(file))
    {
        fgets(str_data, 4995, file);
        a[i] = atof(str_data);
        i++;
    }
    fclose(file);

    mean = Mean(a, size);
    variance = Variance(a, size, mean);
    std = STD(variance);

    printf("Mean value is : %f\n", mean);
    printf("Variace of data is : %f\n", variance);
    printf("Standard Deviation of data is : %f\n\n", std);

    fprintf(mean_f, "%f" ,mean);
    fprintf(var_f, "%f" ,variance);
    fprintf(std_f, "%f" ,std);

    fclose(mean_f);
    fclose(var_f);
    fclose(std_f);
    printf("%s", "Done");
}