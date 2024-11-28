#include <stdio.h>

int main() {
    
    int arr[] = {4,2,6,55,7,32,43};
    int n = sizeof(arr) / sizeof(arr[0]); 

   
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}