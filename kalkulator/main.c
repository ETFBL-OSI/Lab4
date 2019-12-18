#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mnozenje(int a, int b) { return a*b; }
int floorSqrt(int);
int stepenovanje(int broj,int stepen)
{
    return pow(broj,stepen);

}
int main()
{
    int ulaz, a, b;
    printf("              KALKULATOR\n");
    do
    {
        printf("1) Sabiranje dva broja\n");
        printf("2) Oduzimanje dva broja\n");
        printf("3) Mnozenje dva broja\n");
        printf("4) Dijeljenje dva broja\n");
        printf("5) Stepenovanje broja\n");
        printf("6) Korijen broja\n");
        printf("7) Faktorijel broja\n");
        printf("8) Sabiranje vise brojeva\n");
        printf("9) Mnozenje vise brojeva\n");
        printf("10) Pomoc\n");
        printf("11) Izlaz iz programa\n");
        printf("Unesite neki od ponudjenih: ");
        scanf("%d", &ulaz);

    if (ulaz == 1)
    {
        scanf("%d %d", &a, &b);
        printf("\nZbir dva unesena broja je: %d\n", sabiranje(a, b));
    }
    else if (ulaz == 2)
    {
        scanf("%d %d", &a, &b);
        printf("\nRazlika dva unesena broja je: %d\n", razlika(a, b));
    }

    else if (ulaz == 3)
    {
        scanf("%d %d", &a, &b);
        printf("\nProizvod dva unesena broja je: %d\n", mnozenje(a, b));
    }

    else if (ulaz == 4)
    {
        scanf("%d %d", &a, &b);
        printf("\n Kolicnik dva unesena broja je: %d\n", djeljenje(a, b));
    }

    }while(ulaz != 11);
    return 0;
}



int djeljenje(int a,int b){
    return a/b;
}


int sabiranje (int a, int b)
{
	return a+b;
}

int faktorijel(int num){
    int f=1;
    int i;
    for(i=1;i<=num;i++){
        f=f*i;
    }
    return f;
}

int floorSqrt(int x)
{
    if (x == 0 || x == 1)
    return x;

    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}
int razlika(int a, int b)
{
    return a - b;
}
