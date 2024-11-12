#include <stdio.h>
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
