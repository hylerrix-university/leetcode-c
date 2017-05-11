#include <stdio.h>

void SelectionSort (int arr[], int len);

int main (void) {
	int arr[] = {2, 23, 10, 15, 4, 26, 35, 45, 44, 39};
    int i, len = (int) (sizeof(arr) / sizeof(*arr));

    printf("Before SelectionSort:\n");
    for (i = 0; i < len; i++) {
    	printf("%2d ", arr[i]);
    }
    printf("\n");

    SelectionSort(arr, len);

    printf("After SelectionSort:\n");
    for (i = 0; i < len; i++) {
    	printf("%2d ", arr[i]);
    }
    printf("\n");

	return 0;
	return 0;
}

/*
 * 选择排序。每次外循环选择最值固定到数组开始
 * @param: {int []} arr[]
 * @param: {int} len
 * @return null;
 */
void SelectionSort (int arr[], int len) {
    int i, j, temp, min;
    for (i = 0; i < len - 1; i++) {
    	min = i;
    	for (j = i + 1; j < len - 1; j++) {
    		if (arr[min] > arr[j]) {
    			// 只需找到最小的值的位置后一次性替换
    			min = j;
    		}
    		temp = arr[min];
    		arr[min] = arr[i];
    		arr[i] = temp;
    	}
    }
}