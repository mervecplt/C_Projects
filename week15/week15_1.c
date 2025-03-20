#include <stdio.h>

#include <stdio.h>

// Interpolation search function
/*int interpolation_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right && target >= arr[left] && target <= arr[right]) {
        // Estimate the position of the target
        int pos = left + ((double)(right - left) / (arr[right] - arr[left])) * (target - arr[left]);

        // If target is found at position pos
        if (arr[pos] == target)
            return pos;

        // If target is smaller, narrow the search to the left half
        if (arr[pos] < target)
            left = pos + 1;

        // If target is larger, narrow the search to the right half
        else
            right = pos - 1;
    }

    // If target is not found
    return -1;
}

// Main function to test interpolation search
int main() {
    int arr[] = {10, 12, 23, 35, 40, 45, 50, 63, 78, 89}; // A sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 45;  // Change the target value for testing

    // Call interpolation search
    int result = interpolation_search(arr, size, target);

    // Check if the target is found
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}*/



/*int recursiveBinarySearch(int arr[], int left, int right, int target) { 
    if (left <= right) { 
    int mid = left + (right - left) / 2; 
    // Check if target is present at mid 
    if (arr[mid] == target) 
    return mid; 
    // If target is smaller, search in the left half 
    if (arr[mid] > target) 
    return recursiveBinarySearch(arr, left, mid - 1, target); 
    // If target is larger, search in the right half 
    return recursiveBinarySearch(arr, mid + 1, right, target); 
    } 
    // If we reach here, then the element was not present 
    return -1; 
    } */

    
int ExponentialSearch(int arr[], int arrSize, int n){

    int i= 1;
    if(arr[0] == target || arr[1] == target)

    while(){
        i = 2 * i;

    }
    








}