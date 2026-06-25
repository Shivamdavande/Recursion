#include<iostream>
using namespace std;

void printarr(int arr[], int s, int e) {
    for(int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k) {

    printarr(arr, s, e);

    if(s > e) {
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == k) {
        return true;
    }

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[6] = {1, 4, 6, 8, 9, 10};
    int size = 6;
    int key = 10;

    bool ans = binarySearch(arr, 0, size-1, key);
    if(ans) {
        cout << "Element Found" << endl;
    }
    else {
        cout << "Element Not Found" << endl;
    }
}