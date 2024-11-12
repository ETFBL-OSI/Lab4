#include <stdio.h>
#include <math.h>
double stepenovanje(double baza, double eksponent){
    return pow(baza,eksponent);
}

int racunanjestatka(int broj, int djelilac);


int main()
{
    int a,b;

    printf("Hello world!\n");
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
