//rithvik
//Date 30-09-26

#include<stdio.h>
int hour(int hr){    //converting hours into seconds
	return hr*60*60;
}
int minutes(int min){   //converting minutes to seconds
	return min*60;
}
int main(){
	int h,m,s;
	printf("Enter the time: ");
	scanf("%d %d %d",&h,&m,&s);
	int totalseconds=hour(h) + minutes(m) + s;
	printf("total no.of seconds=%d\n",totalseconds);
	return 0;
}
