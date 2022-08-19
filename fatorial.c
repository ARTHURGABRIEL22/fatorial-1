#include <stdio.h>
#include <string.h>
int main(){
	int i=0, n, fatorial=1, j;
	while(i==0){
		printf("Insira um numero para o fatorial: \n");
		scanf("%d",&n);
		if(n<0){
			break;
		}
		else if(n==0){
			fatorial=1;
		}
		else if(n>0){
			for(j=n; j>0; j--){
				fatorial=fatorial*j;
				
			}
			
		}
		printf("%d\n",fatorial);
			fatorial=1;
	}
}
