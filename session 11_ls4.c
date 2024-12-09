#include<stdio.h> 
int maxValue(int array[],int size){
	int max = array[0];
	for(int i=0;i<size;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
		return max; 
}
int main(){
	int number[] ={1,4,6,5,7,10};
	int length=sizeof(number)/sizeof(int);
	maxValue(number,length);
	printf("gia tri lon nhat cua mang la %d \n", maxValue(number,length));
	return 0; 
}

