#include <stdio.h>
int main (){
	int a[3][3];
	int even=0,odd=0;
	int neg=0,pos=0,zero=0;
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		printf("enter element for row %d and column %d: ",i+1,j+1);
		scanf("%d", &a[i][j]);
			}}
			
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		if (a[i][j]%2==0){
			even++;
		}
		else {odd++;
		}}}
		
		
		
		for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		if (a[i][j]==0){
			zero++;
		}
		 
		else if (a[i][j]>0){
			pos++;
		}
		else {neg++;}
		}}
		printf("\nnumber of positive numbers is %d",pos);
		printf("\nnumber of negative numbers is %d",neg);
		printf("\nnumber of even numbers is %d",even);
		printf("\nnumber of odd numbers is %d",odd);
		printf("\nnumber of 0s is %d",zero);
		
	}
	
