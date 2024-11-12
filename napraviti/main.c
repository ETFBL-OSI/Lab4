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


int oduzimanjeDvaBroja(int a, int b)
{
    return a-b;

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


    printf("Hello world!\n");
    printf("Unesite 2 broja:");
    scanf("%d %d",&a,&b);
    printf("Suma 2 broja:%d",sabiranje2Broja(a,b));
    /*int a, b;
    printf("Unesi dva broja: ");
    scanf("%d %d", &a, &b);
    int x = oduzimanjeDvaBroja(a,b);
    printf("Razlika dva unesena broja %d i %d je: %d", a,b,x);
    */

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
<<<<<<< HEAD
    */
    return 0;





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

