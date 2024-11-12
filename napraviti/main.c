#include <stdio.h>

int oduzimanjeDvaBroja(int a, int b)
{
    return a-b;
}

int main()
{
    int a, b;
    printf("Unesi dva broja: ");
    scanf("%d %d", &a, &b);
    int x = oduzimanjeDvaBroja(a,b);
    printf("Razlika dva unesena broja %d i %d je: %d", a,b,x);
    return 0;
}
