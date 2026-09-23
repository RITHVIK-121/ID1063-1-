#include<stdio.h>
int dayselapsed(int day,int mon){
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int sum=0;
for(int i=0;i<mon-1;i++){
	sum=sum+month[i];
}
return sum+day;}

int main(){
	int d,m;
	
	printf("date and month:");
		scanf("%d %d",&d,&m);
	int total=dayselapsed(d,m);
	printf("total days: %d\n",total);
	return 0;}
