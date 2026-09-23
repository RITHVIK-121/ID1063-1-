//rithvik
//date:23-09-26

#include <stdio.h>

int main() //main function 
{
    int m, n, T;
    int image[100][100];
    printf("enter no.of rows:");
    scanf("%d", &m);
    printf("enter no.of columns:");
    scanf("%d",&n);
    do{printf("Enter T:");
	    scanf("%d", &T);}
    while(T<0 ||T>255);
    
    for(int i=0;i<m;i++){    //taking input of array
        for(int j=0;j<n;j++){
            scanf("%d",&image[i][j]);
        }}                   //modifying the array
        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                
		    if(image[i][j]<T) {
                    image[i][j]=0;
		    }
                    
		    else if(image[i][j]>=T){
                        image[i][j]=255;
		    }
            }}    //printing the final array
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    printf("%d ",image[i][j]);
                }
                printf("\n");}
                return 0;}
 
