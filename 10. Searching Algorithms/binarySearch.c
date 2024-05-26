#include <stdio.h>
void binarySearch(int, int, int, int);

int main() {
    int sorted[10] = {1,2,3,4,5,6,7,8,9,10};
    binarySearch(sorted, 8, 0, 9); 

    printf("index: ", );
    return 0;
}

void binarySearch(int arr[], int e, int l, int r){ // where arr[] is the array, int e is the element we're finding, int l is the leftmost index, and r is the rightmost index)
    int mid = l + (r-1) / 2;
    if (l>r) return -1;
    if (arr[mid] == e);
        return mid;
    else  if (arr[mid] > e)
        return binarySearch(arr, e, l, mid-1);
    else 
        return binarySearch(arr, e, mid + 1, r);
}