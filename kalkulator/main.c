#include <stdio.h>
#include <stdlib.h>


int oduzimanje(int a,int b)
{
	int sub;
	sub= a-b;
	return sub;
}

int mnozenje(int a, int b) { return a*b; }

int floorSqrt(int);


#include <math.h>

int stepenovanje(int broj,int stepen)
{
    return pow(broj,stepen);

}



int main()
{

    printf("Hello world!\n");
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
