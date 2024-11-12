#include <stdio.h>

int racunanjestatka(int broj, int djelilac);


int main()
{


    int ostatak = racunanjeOstatka(10, 3);

    printf("Hello world!\n");
    return 0;
}

int racunanjeOstatka(int broj, int djelilac){
    int ostatak;
    ostatak = broj % djelilac;
    return ostatak;
}
