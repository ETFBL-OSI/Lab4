#include <stdio.h>
#include <math.h>
double stepenovanje(double baza, double eksponent){
    return pow(baza,eksponent);
}

int main()
{
    /*
    double a = 2;
    double b = 3;
    double c = stepenovanje(a,b);
    printf("%lf", c);
    */
    
}
int sabiranje2Broja(int a, int b)
{
    return a+b;
}

int main()
{ int a,b;

    printf("Hello world!\n");
    printf("Unesite 2 broja:");
    scanf("%d %d",&a,&b);
    printf("Suma 2 broja:%d",sabiranje2Broja(a,b));
    return 0;
}
