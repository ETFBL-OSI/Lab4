#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Unesite broj elemenata n: ");
    scanf("%d" , &n);

    int niz[n];
    for(int s=0 ; s<n; s++)
    {   int pom;
        printf("%d.  ",s+1);
        scanf("%d" , &pom);
        niz[s]=pom;
        printf("\n");
    }

    int rez = 0;
    for(int i=0; i<n; i++)
    {
        int p = niz[i];
        if(p > rez)
        {
            rez = p;
        }


    }
    printf("Najveci broj je : %d" , rez);

    return 0;
}
