#include<stdio.h>
int main(){
	int i,j;
	 int arr[] = {6, 7, 4, 2, 1, 5};
    int length = sizeof(arr)/sizeof(int);
	// B1:
    // Chia dôi m?ng thành 2 ph?n, 1 ph?n dã du?c s?p x?p
    // và ph?n còn l?i chua du?c s?p x?p
    for(i = 1; i < length; i++) {
        // Ðây là các ph?n t? trong ph?n chua du?c s?p x?p
        int key = arr[i];
        // B2: C?n 1 vòng l?p khác d? l?y ra du?c các ph?n t?
        // trong ph?n m?ng dã du?c s?p x?p
        int j = i - 1;
        while(j >= 0 && key < arr[j]) {
            // B3: Liên t?c l?p l?i quá trình c?p nh?t l?i v? trí c?a ph?n t? n?m trong dãy dã du?c s?p x?p lên ti?p 1 v? trí +1
            // và ch? d?ng l?i khi key >= arr[j]
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // B4:
        // Nhét (INSERT) key vào dúng v? trí j + 1
        arr[j + 1] = key;

    }
    // B4: OUTPUT m?ng dã du?c s?p x?p
    for(i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, arr[i]);
    }
	return 0;
}
