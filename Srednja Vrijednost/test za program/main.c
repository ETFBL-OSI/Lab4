#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  a, b, c, d;
	double sr;
	printf("unesi prvi broj");
	scanf("%d", &a);
		printf("unesi drugi  broj");
		scanf("%d", &b);
	printf("unesi treci broj");
	scanf("%d", &c);
	printf("unesi cetvrti broj");
	scanf("%d", &d);

	sr = (a + b + c + d) / 4.0;
		printf("srednja vrijednost ova cetri broja je %lf", sr);


}
