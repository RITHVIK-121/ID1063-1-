#include<stdio.h>
int runlength(int a[],int n,int k){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			count++;
			if(count>k){
				return i+1;}}
			if(a[i]==0){
				count=0;}}
	
		return 0;
}
int main(){
	int n,k;
	printf("Enter no of sessions: ");
			scanf("%d",&n);
	printf("Enter no of consecutive sessions: ");
	scanf("%d",&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}

	int final=runlength(a,n,k);
	printf("%d\n",final);
	return 0;}
