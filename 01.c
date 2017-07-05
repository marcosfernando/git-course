#include<stdio.h>
int main(){
	int num,soma=0;
	do{//faça
		system("cls");
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num > 0){
			soma+=num;
		}
		
	}while(num>0);//enquanto (condição for verdadeira)
	
	printf("A soma eh: %d",soma);
	
	return 0;
}
