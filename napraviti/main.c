#include <stdio.h>

int main()
{
    float n, percentage, result;
    printf("Unesite broj:");
    scanf("%f", &n);
    printf("Unesite procenat:");
    scanf("%f", &percentage);
    result = n*(percentage/100);
    printf("Procenat broja je: %0.2f.", result);
    return 0;
}
