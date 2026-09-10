#include<stdio.h>
void printBorder(int count){
	for(int i=1;i<=count;i++){
		printf("*");}
		printf("\n");
	}
int main(){
	int count;
	printf("enter a number: ");
	scanf("%d",&count);
	printBorder(count);
	return 0;}
