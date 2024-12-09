#include<stdio.h>
int main(){
	int i,j;
	 int arr[] = {6, 7, 4, 2, 1, 5};
    int length = sizeof(arr)/sizeof(int);
	// B1:
    // Chia d�i m?ng th�nh 2 ph?n, 1 ph?n d� du?c s?p x?p
    // v� ph?n c�n l?i chua du?c s?p x?p
    for(i = 1; i < length; i++) {
        // ��y l� c�c ph?n t? trong ph?n chua du?c s?p x?p
        int key = arr[i];
        // B2: C?n 1 v�ng l?p kh�c d? l?y ra du?c c�c ph?n t?
        // trong ph?n m?ng d� du?c s?p x?p
        int j = i - 1;
        while(j >= 0 && key < arr[j]) {
            // B3: Li�n t?c l?p l?i qu� tr�nh c?p nh?t l?i v? tr� c?a ph?n t? n?m trong d�y d� du?c s?p x?p l�n ti?p 1 v? tr� +1
            // v� ch? d?ng l?i khi key >= arr[j]
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // B4:
        // Nh�t (INSERT) key v�o d�ng v? tr� j + 1
        arr[j + 1] = key;

    }
    // B4: OUTPUT m?ng d� du?c s?p x?p
    for(i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, arr[i]);
    }
	return 0;
}
