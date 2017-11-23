#include <stdio.h>
void wczytaj(double *a1,double *a2,double *b1,double *b2,double *c1,double *c2)
{	puts("Podja wartosc a1: ");
        scanf("%lf",a1);
        puts("Podaj wartosc a2: ");
        scanf("%lf",a2);
        puts("Podaj wartosc b1: ");
        scanf("%lf",b1);
        puts("Podaj wartosc b2: ");
        scanf("%lf",b2);
        puts("Podaj wartosc c1: ");
        scanf("%lf",c1);
        puts("Podaj wartosc c2: ");
        scanf("%lf",c2);
}

int main()
{
	double a1,a2,b1,b2,c1,c2,W,Wx,Wy;
	wczytaj (&a1,&a2,&b1,&b2,&c1,&c2);

return 0;
}
