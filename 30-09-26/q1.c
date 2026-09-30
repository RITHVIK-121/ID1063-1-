#include<stdio.h>
int product(int a[][],int b[][],int row,int col,int common){
	int sum=0;
	for(int i=row;i<row+1;i++){
		for(int j=common;j<common+1;j++){
			for(int k=0;k<col;col++){
				sum=sum+a[i][k]*b[k][j];}}}
	return sum;}

int main(){
	int r1,c1,r2,c2;
	printf("enter r1: ");
	scanf("%d",&r1);
	printf("enter c1: ");
	scanf("%d",&c1);
	r2=c1;
        printf("enter c2: ");
	scanf("%d",&c2);
	int a[r1][c1],b[r2][c2];
	printf("enter A");
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			scanf("%d",&a[i][j]);}}
	printf("enter B");
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			scanf("%d",&b[i][j]);}}
	int promatrix[r1][c2];
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			for(int k=0;k<c2;k++){
				 promatrix[i][j]=product(a[r1][c1],b[r2][c2],i,j,k);
			}}}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			printf("%d ",promatrix[i][j]);
		}
		printf("\n");
	}
	return 0;}

