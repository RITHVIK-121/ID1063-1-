#include<stdio.h>
int main(){
	int n;
	printf("enter a positive integer n: \n");
	scanf("%d",&n);
	int values[n];
	for(int i=0;i<n;i++){
	printf("enter the values in between 0 & 9: ");
	scanf("%d",&values[i]);
	}
	int count=0,i=0;
        if(values[i]==0){
		count = count +1;
		i++;
	return 0;
}
