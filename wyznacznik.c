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
double wyznacznik_glowny(double a1,double a2,double b1,double b2)
{
return a1*b2-b1*a2;
}
double wyznacznik_x(double c1,double b2,double b1,double c2)
{
return c1*b2-b1*c2;
}
double wyznacznik_y(double a1,double c2,double c1,double a2)
{ 
return a1*c2-c1*a2;
}
int main()
{
	double a1,a2,b1,b2,c1,c2,W,Wx,Wy,x,y;
	wczytaj (&a1,&a2,&b1,&b2,&c1,&c2);
	W=wyznacznik_glowny(a1,b2,b1,a2);
	Wx=wyznacznik_x(c1,b2,b1,c2);
	Wy=wyznacznik_y(a1,c2,c1,a2);
	x=Wx/W;
	y=Wy/W;




printf("W = %lf\n",W);
printf("Wx = %lf\n",Wx);
printf("Wy = %lf\n",Wy);
printf("x wynosi %lf, a y wynosi %lf\n",x,y);
return 0;
}
