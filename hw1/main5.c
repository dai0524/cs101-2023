#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cmp(const void *a, const void *b) {
    return (*(char *)a) - (*(char *)b);
}

char find_kth_largest_number(char* arr, int n, int k) {
    // 將字元陣列轉換成整數陣列
    int* intArr = (int*) malloc(sizeof(int) * n);
    char* ptr = strtok(arr, " ");
    int idx = 0;
    while (ptr != NULL) {
        intArr[idx++] = atoi(ptr);
        ptr = strtok(NULL, " ");
    }

    // 進行快速排序，找到第k大的數字
    qsort(intArr, idx, sizeof(int), cmp);
    char kth_largest_number = intArr[idx - k] + '0';
    free(intArr);
    return kth_largest_number;
}

int main() {
    char a[] = "-9 8 7 6 5 -4 3 -2 1";
    int n = strlen(a);
    int k = 4;
    char kth_largest_number = find_kth_largest_number(a, n, k);
    printf("%c",kth_largest_number);
    
    return 0;
    
}
