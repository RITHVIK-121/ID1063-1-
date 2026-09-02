#include<stdio.h>
int main()
{
	int n;
	printf("enter a positive integer n : ");
	scanf("%d",&n);
	double val[n];
	for(int i=0;i<n;i++){
		printf("enter the values : ");
		scanf("%lf",&val[i]);
	}
	double sum = 0;
	for(int i=0;i<n;i++){
        sum = sum + val[i];
	}
	double average=(sum)/n;
	printf("the average of given values is %lf",average);
	int count=0;
	for(int i=0;i<n;i++){
		if(val[i]>average){
			count = count +1;
		}}
	printf("No.of values  that are greater than average is %d" ,count);
	return 0;
	}
