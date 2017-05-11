#include <stdio.h>

void BubbleSort (int arr[], int len);

int main (void) {
    int arr[] = {2, 23, 10, 15, 4, 26, 35, 45, 44, 39};
    int i, len = (int) (sizeof(arr) / sizeof(*arr));

    printf("Before BubbleSort:\n");
    for (i = 0; i < len; i++) {
    	printf("%2d ", arr[i]);
    }
    printf("\n");

    BubbleSort(arr, len);

    printf("After BubbleSort:\n");
    for (i = 0; i < len; i++) {
    	printf("%2d ", arr[i]);
    }
    printf("\n");

	return 0;
}

/*
 * 冒泡排序。每次外循环将最值固定到数组最后
 * @param: {int []} arr
 * @param: {int} len
 * @return null;
 */
void BubbleSort (int arr[], int len) {
	int i, j, temp;
	for (int i = 0; i < len - 1; i++) {
		// 每趟 i 循环将最大(小)值固定到最后一位
		for (int j = 0; j < len - 1 - i; j++) {
			// 每趟 j 循环循环没有被固定到后方的数字
			if (arr[j] > arr[j + 1]) {
				// arr[j] < arr[j + 1] 代表从小到大排序
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

