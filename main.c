#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b) 
{
	int sum=a+b;
	return sum;
	
}

int square(int n)
{
	int squared=n*n;
	return squared;

}

int get_max(int x, int y)
{
	int max;
	
	if (x<y)
		max=y;
	if (x>y)
		max=x;
	else 
		max=x=y;
		
	return max;
}

int main(int argc, char *argv()){
	
	int a, b;
	a=4;
	b=7;
	sumTwo(4, 7);
	printf("sumTwo result will be %i\n", sumTwo(4, 7));
	
	square(4);
	printf("square result will be %i\n", square(4));
	
	int x, y;
	x=10;
	y=6;
	
	get_max(10, 6);
	printf("two integers will be %d and %d, so the max value will be %d.", x, y, get_max(10,6));
	
	system("PAUSE");
	return 0;

}


