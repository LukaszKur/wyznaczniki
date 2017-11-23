#include <stdio.h>
int mnoz(int a,int b) 
	{
	return a*b;
	}
int dodaj(int a, int b)
	{
	return a+b;
	}
int odejmij(int a, int b)
	{
	return a-b;
	}
int dziel(int a, int b)
	{
	if (b==0)
	{
	printf("Nie dziel cholero przez zero :)\n");
	}
	else
	{
	return a/b;
	}
	}
int main(void)
{
	int a1, a2,b1,c1,c2,W,Wx,Wy;
	printf("Podja wartosc a1: ");
	scanf("%i",&a1);
	printf("Podaj wartosc a2: ");
	scanf("%i",&a2);
	printf("Podaj wartosc b1: ");
	scanf("%i",&b1);
	printf("Podaj wartosc b2: ");
	scanf("%i",&b2);
	
