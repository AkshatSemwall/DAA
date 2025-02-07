#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    int i = 1;
    int comp = 0;
    while(i < n && arr[i] < x){
        i = i * 2;
    }
    
    int left = i / 2;
    int right = i < n ? i : n - 1;  
    
    for(int j = left; j <= right; j++){
        comp++;
        if(arr[j] == x){
            cout << "Present " << comp;
            return 0;
        }
    }
    
    cout << "Not present " << comp;
    return 0;
}

