#include <stdio.h>

void InsertionSort (int arr[], int len);

int main (void) {
    int arr[] = {2, 23, 10, 15, 4, 26, 35, 45, 44, 39};
    int len = (int) (sizeof(arr) / sizeof(*arr));

    printf("Before InsertionSort:\n");
    for (int i = 0; i < len; i++) {
    	printf("%2d ", arr[i]);
    }
    printf("\n");

    InsertionSort(arr, len);

    printf("After InsertionSort:\n");
    for (int i = 0; i < len; i++) {
    	printf("%2d ", arr[i]);
    }
    printf("\n");

	return 0;
}

/*
 * 插入排序。前面有序的数字循环向后留给满足条件的第一个无序数字
 * @param: {int []} arr
 * @param: {int} len
 * @return null;
 */
void InsertionSort (int arr[], int len) 
{
    int i, j, temp;
    for (i = 1; i < len; i++) {
        // 与已排序的数逐一比较，大于 temp 时，该数向后移
        temp = arr[i];
        // 如果将赋值放到下面的for循环内, 会导致在第10行出现 j 未声明的错误
        j = i - 1;
        for (; j >= 0 && arr[j] > temp; j--) {
            // j 循环到-1时，由于短路求值，不会运算 arr[-1]
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp; 
        // 被排序数放到正确的位置
    }
}

