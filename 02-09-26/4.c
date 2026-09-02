#include<stdio.h>
int main() 
{
	int m,n;
	printf("enter length of the rectangle m : ");
	scanf("%d",&m);
	printf("enter the breadth of the rectangle 'n' : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i==1 || i==n){
		for(int j=1;j<=m;j++){
			printf(" *");
			
		}}
		if(i>1 && i<n){
		for(int j=1;j<=m;j++){
			if(j==1 || j==m){
				printf(" *");
			}
			else{printf("  ");
			
			}}}
		printf("\n");
	}
		return 0;
	                }
