#include <stdio.h>
#include <math.h>
#include <stdarg.h>

float srednja_vrijednost(int n, ...)
{
    va_list arg;
    va_start(arg, n);
    int sum;
    for(int i = 0; i<n; i++)
    {
        sum += va_arg(arg, int);
    }
    va_end(arg);
    return sum / n;
}

double stepenovanje(double baza, double eksponent){
    return pow(baza,eksponent);
}

int racunanjestatka(int broj, int djelilac);


int faktorijel(int broj){

    int p = 1;
    for( int i = 1; i <= broj; i++){
        p *= i;
    }

    return p;
}

int main()
{
    int a,b;
    float sr = srednja_vrijednost(4, 1, 3, 5, 7);
    printf("Srednja vrijednost: %.2f\n", sr);
    printf("Hello world!\n");

    int f = faktorijel(4);
    printf("%d", f);

    printf("Unesite 2 broja:");
    scanf("%d %d",&a,&b);
    printf("Suma 2 broja:%d",sabiranje2Broja(a,b));
    int ostatak = racunanjeOstatka(10, 3);
    /*
    double aa = 2;
    double bb = 3;
    double cc = stepenovanje(a,b);
    printf("%lf", c);
*/
    float n, percentage, result;
    printf("Unesite broj:");
    scanf("%f", &n);
    printf("Unesite procenat:");
    scanf("%f", &percentage);
    result = n*(percentage/100);
    printf("Procenat broja je: %0.2f.", result);


    return 0;
}
int sabiranje2Broja(int a, int b)
{
    return a+b;
}
int racunanjeOstatka(int broj, int djelilac){
    int ostatak;
    ostatak = broj % djelilac;
    return ostatak;
}
