#include<stdio.h>
#include<math.h>

double rms(double a[],int n){
	double sum=0;
	for(int i=0;i<n;i++){
		sum += a[i]*a[i];
}
return sqrt(sum/n);
}



int main(){
	int n;
	scanf("%d",&n);
	double a[n];
		for(int i=0;i<n;i++){
			scanf("%lf",&a[i]);
		}

	double value;
	value=rms(a,n);
	printf("%.2lf\n",value);
	return 0;}

