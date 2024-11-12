#include <stdio.h>
int zbir_prvih_n_brojeva(int n)
{
    if(n<0)return 0;
    int suma=0;
    for(int i=0;i<=n;i++)
    suma+=i;
    return suma;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ispis=zbir_prvih_n_brojeva(n);
    printf("%d",ispis);
    return 0;
}
/*int sabiranje2Broja(int a, int b)
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
}*/
