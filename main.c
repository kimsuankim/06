#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
 int factorial(int n)
 {
 	int res=1;
 	int i;
 	for(i=1; i<=n; i++)
 	 res= res*i;
	return res;   
 }
 
int combination(int n, int r)
{
	int div1,div2; //순서대로 분자분모
	div1= factorial(n);//n!
	div2= (factorial(n-r) * factorial (r)); //(n-r)!*(r)!
	
	return div1/div2;
}



int main(int argc, char *argv[]) {
    int n, r;
	int result;
	
//1.입력값 받음	
	printf("input n:");
	scanf("%d", &n); //n 입력 
	printf("input r:");
	scanf("%d", &r); //r입력 
	
//2. 분자분모 계산
    result= combination(n,r);
    
//3.최종값 출력	 
    printf("result is %i\n", result); 
	
	return 0;
}
