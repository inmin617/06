#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n){
	int i;
	int result=1;
	for (i=1; i<=n; i++){
		result=result*i;
	}
	return result;
}

int combination(int n, int r)
{
	int div1, div2;
	div1=factorial(n);
	div2=factorial(n-r)*factorial(r);
	
	return(div1/div2);
}

int main(int argc, char *argv()){
	int n, r;
	int div1, div2;
	int result;
	
	printf("input n: ");
	scanf("%d", &n);
	
	printf("input r: ");
	scanf("%d", &r);
	
	result=combination(n,r);
	
	printf("the combination of %d and %d will be: %.21f", n, r, result);
	
	system("PAUSE");
	return 0; 
}
