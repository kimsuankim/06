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
	int div1,div2; //������� ���ںи�
	div1= factorial(n);//n!
	div2= (factorial(n-r) * factorial (r)); //(n-r)!*(r)!
	
	return div1/div2;
}



int main(int argc, char *argv[]) {
    int n, r;
	int result;
	
//1.�Է°� ����	
	printf("input n:");
	scanf("%d", &n); //n �Է� 
	printf("input r:");
	scanf("%d", &r); //r�Է� 
	
//2. ���ںи� ���
    result= combination(n,r);
    
//3.������ ���	 
    printf("result is %i\n", result); 
	
	return 0;
}
