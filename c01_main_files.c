//Ex00-----------------------
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	integer;

	integer = 100;  //testing if you print 42 or 100
	nbr = &integer;
	printf("%d\n", integer); //100 will be printed
	ft_ft(nbr);
	printf("%d\n", integer); //42 will be printed
	return (0);
}

//Ex01---------------------
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********pnbr;
	int	********pnbr2;
	int	*******pnbr3;
	int	******pnbr4;
	int	*****pnbr5;
	int	****pnbr6;
	int	***pnbr7;
	int	**pnbr8;
	int	*pnbr9;
	int	nbr;

	nbr = 100;
	pnbr9 = &nbr;
	pnbr8 = &pnbr9;
	pnbr7 = &pnbr8;
	pnbr6 = &pnbr7;
	pnbr5 = &pnbr6;
	pnbr4 = &pnbr5;
	pnbr3 = &pnbr4;
	pnbr2 = &pnbr3;
	pnbr = &pnbr2;

	printf("%d\n", nbr); //Output is 100
	ft_ultimate_ft(pnbr);
	printf("%d\n", nbr); //output is 42
}

//ex02-------------------------
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 10;
	b = 100;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	printf("pa should be 42: %d\n", *pa); //10 to 100
	printf("pb should be 24: %d\n", *pb); //100 to 10
}

//ex03---------------------------
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 185;
	int	b = 10;
	int	*div = &a;
	int	*mod = &b;

  printf("%d",a); // a= 185
  printf("%d",b);  //b = 10
  
	ft_div_mod(a, b, div, mod);
	printf("a: %d\n", a);  //a = 18
	printf("b: %d\n", b);   //b =5
	printf ("a/b: %d\n", *div); 
	printf("%d", *mod);
}

//ex04-----------------------
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int box_a = 20;
	int box_b = 50;
	int *a = &box_a;
	int *b = &box_b;

	ft_ultimate_div_mod(a,b);

	printf("*a / *b: %d\n", *a); // 0
	printf("*a %% *b: %d\n", *b);  //20
}

//ex05--------------------------
void	ft_putstr(char *str);

int	main(void)
{
	char box[] = "Welcome to 42 KL";
	char *dest = box;

	ft_putstr(dest);
}

//ex06-----------------------
#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char box[] = "Hello Pisciners";

	//int count = ft_strlen(box);
  int count;
  count = ft_strlen(box);
  
	printf("The number of char is: %d", count);
}
