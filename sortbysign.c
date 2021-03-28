#include <stdio.h>

 
int main(){
int a1= 0;
int arr[12]={4,3,-2,0,2,9,-1,10,0,5,23,-4};
int size=sizeof(arr)/sizeof(arr[0]);
int NewArr[12];
for(int i=0; i<size;i++){
	if (arr[i]<0){
		NewArr[a1]=arr[i];
		a1++;
		}
		}
for (int i=0; i<size;i++){
	if (arr[i]==0){
	NewArr[a1]=arr[i];
	a1++;
	}
	}
for(int i=0;i<size;i++){
	if(arr[i]>0){
	NewArr[a1]=arr[i];
	a1++;
	}
	}
		printf("Sorted array is \n");
		for(int i=0;i<size;i++){
		printf("%d ", NewArr[i]);
		}
		}