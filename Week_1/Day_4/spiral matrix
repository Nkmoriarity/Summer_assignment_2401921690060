int check(int key, int* a, int* returnSize) {
    if (key >= *returnSize) {
        return 1;
    }
    return 0;
}

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize,
                 int* returnSize) {
    *returnSize = matrixSize * *matrixColSize;
    int* a = malloc(sizeof(int) * *returnSize);

    int i = 0;
    int j = 0;
    int key = 0;
    int stroke = 1;
    int stroke_1_size = *matrixColSize;
    int stroke_2_size = matrixSize;
    int stroke_3_size = 0;
    int stroke_4_size = 1;

    do {
        if (stroke % 4 == 1) {
            for (j; j < stroke_1_size; j++) {
                if (check(key, a, returnSize)) {
                    break;
                }
                a[key] = matrix[i][j];
                key++;
            }
            i++;
            j--;
            stroke++;
            stroke_1_size--;
        }
        if (stroke % 4 == 2) {
            for (i; i < stroke_2_size; i++) {
                if (check(key, a, returnSize)) {
                    break;
                }
                a[key] = matrix[i][j];
                key++;
            }
            i--;
            j--;
            stroke++;
            stroke_2_size--;
        }
        if (stroke % 4 == 3) {
            for (j; j >= stroke_3_size; j--) {
                if (check(key, a, returnSize)) {
                    break;
                }
                a[key] = matrix[i][j];
                key++;
            }
            j++;
            i--;
            stroke++;
            stroke_3_size ++;
        }

        if (stroke % 4 == 0) {
            for (i; i >= stroke_4_size; i--) {
                if (check(key, a, returnSize)) {
                    break;
                }
                a[key] = matrix[i][j];
                key++;
            }
            i++;
            j++;
            stroke++;
            stroke_4_size ++;
        }

    } while (key < *returnSize);

    return a;
}
