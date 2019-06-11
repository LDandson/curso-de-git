#include<stdio.h>
int soma(int a,int b){
	
	int soma_num = a+b;
	return soma_num;
}
int subtracao(int a, int b){
	int sub_num = a-b;
	return sub_num;
}

int main(){
	
	printf("soma dois numeros %d \n", soma(3,5));
	printf("subtrai dois numeros %d \n", subtracao(7,2));
	return 0;
}
