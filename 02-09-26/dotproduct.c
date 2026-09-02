#include<stdio.h>
int main(){
	int n;
	printf("enter the length of the vector : ");
	scanf("%d",&n);
	double vector1[n],vector2[n];
	for(int i=0;i<n;i++){
 printf("enter the coordinates of vector1 : \n");
	scanf("%lf",&vector1[i]);
	}
	for(int i=0;i<n;i++){
 printf("enter the cordinates of vector2: \n");
	scanf("%lf",&vector2[i]);
	}
	double product,sum=0;
	for(int i=0;i<n;i++){
	product=(vector1[i])*(vector2[i]);
	sum=sum + product;
	}
 printf("the dot product of the given vectors is :%lf",sum);
	return 0;
}
