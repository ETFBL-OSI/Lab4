#include <stdio.h>

int faktorijel(int broj){

    int p = 1;
    for( int i = 1; i <= broj; i++){
        p *= i;
    }

    return p;
}

int main()
{
    printf("Hello world!\n");

    int f = faktorijel(4);
    printf("%d", f);

    return 0;
}
