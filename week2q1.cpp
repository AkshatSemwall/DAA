#include<iostream>
using namespace std;

int First(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1;  
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return result;
}

int Last(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            result = mid;
            low = mid + 1; 
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int x;
    cout << "Enter the element to search: ";
    cin >> x;


    int first = First(arr, n, x);
    if (first == -1) {
        cout << " Not found" << endl;
    } else {
        int last = Last(arr, n, x);
        int occ = last - first + 1;
        cout << " Found " << occ << endl;
    }

    return 0;
}
