#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k) {
    if(size == 0) {
        return false;
    }

    if(arr[0] == k) {
        return true;
    }

    else {
        bool remainingPart = linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}


int main () {
    int arr[5] = {1,3,6,7,9};
    int size = 5;
    int key = 1;

    bool ans = linearSearch(arr, size, key);

    if(ans) {
        cout << "Present" << endl;
    }
    else {
        cout << "Not Present" << endl;
    }
}