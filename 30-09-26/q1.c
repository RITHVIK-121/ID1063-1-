#include<stdio.h>
int productEntry(int a[][20],int b[][20],int row,int col,int common);

int main(){
	int r1,c1,r2,c2;
	printf("enter r1: ");
	scanf("%d",&r1);
	printf("enter c1: ");
	scanf("%d",&c1);
	printf("enter r2:");
	scanf("%d",&r2);
        printf("enter c2: ");
	scanf("%d",&c2);
	int a[r1][c1],b[r2][c2];
	for(int i=0;i<r1;i++){
		
		printf("enter the entries in row");
		for(int j=0;j<c1;j++){
			scanf("%d",&a[i][j]);}


