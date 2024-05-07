    int mergedArray[size * 2];
    int mergedIndex = 0;

    // merge the arrays in descending order
    for (int i = 0; i < size; i++) {
        mergedArray[mergedIndex++] = firstArray[i];
        mergedArray[mergedIndex++] = secondArray[i];
    }

    // print the merged array in descending order
    printf("The merged array in descending order is:\n");
    for (int i = size * 2 - 1; i >= 0; i--) {
        printf("%d ", mergedArray[i]);
    }