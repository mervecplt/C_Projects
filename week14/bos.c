#include <stdio.h>

int linearSearchRecursive(int arr[], int size, int target, int index)
{
    // Base case: Dizinin sonuna gelindiğinde hedef bulunmazsa -1 döndür
    if (index >= size)
        return -1;
    
    // Eğer hedef bulunursa, indeksi döndür
    if (arr[index] == target)
        return index;

    // Hedef bulunmadıysa, fonksiyonu bir sonraki index ile çağır
    return linearSearchRecursive(arr, size, target, index + 1);
}

int main(void)
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = linearSearchRecursive(arr, size, target, 0);

    if (result != -1)
        printf("Hedef %d dizide %d. indekste bulundu.\n", target, result);
    else
        printf("Hedef %d dizide bulunamadı.\n", target);

    return 0;
}
