#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr , int n){
    for(int i=1 ; i<n ; i++){
        bool swapped = false;
        for(int j =0 ; j<n-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            //already swapped now t.c. becomes 0(n) after bool swapped optimisation.
            break;
        }
    }
}

int main(){
    vector<int> nums = {10,1,7,6,14,9};
    int n = 6;

    bubbleSort(nums , n);

    for(int value : nums){
        cout<< value<<" "; 
    }
    return 0;
}
