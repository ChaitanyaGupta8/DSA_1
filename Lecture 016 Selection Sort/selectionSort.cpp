#include <bits/stdc++.h>
using namespace std;
//n is the number of elements in the array.
void selectionSort(vector<int> &arr , int n){
    for(int i = 0; i<n-1 ; i++){
        int minIndex = i;
        for(int  j = i+1 ; j<n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}

int main(){
    vector<int> nums = {6,2,8,4,10};
    int n =5;

    selectionSort(nums , n);

    for(int value : nums){
        cout<< value << " ";
    }

    return 0;
}
