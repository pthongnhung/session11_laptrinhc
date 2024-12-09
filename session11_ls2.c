#include<stdio.h> 
int value(int array[],int size){
	for(int i=0;i<size;i++){
		printf("%d\n",array[i]);
	}
	return 0; 
}
int main(){
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(int);
	value(array,size);
	return 0; 
}
