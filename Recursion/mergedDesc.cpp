#include <stdio.h>

#define MAX_ARRAY_LENGTH 100

void merge_descending(char arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) { // Changed to >= for descending order
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSortDescending(char arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortDescending(arr, left, mid);
        mergeSortDescending(arr, mid + 1, right);
        merge_descending(arr, left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char arr[n];
    for (int i = 0; i < n; i++)
        scanf(" %c", &arr[i]);

    mergeSortDescending(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%c ", arr[i]);

    return 0;
}
