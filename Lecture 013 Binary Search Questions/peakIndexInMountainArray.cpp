//O(logn)
#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int> arr){
    int st = 0 , end = arr.size() - 1;
    
    while(st < end){
        int mid = st + (end - st)/2;

        if(arr[mid] < arr[mid + 1]){
            st = mid + 1;
        }   else{
            end = mid;
        }
    }
    return st;
}

int main(){
    vector<int> arr = {1,2,3,2,1};

    cout<<"peak index is : " <<  peakIndex(arr);
    return 0;
}



//0(n)  very easy not optimised
#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int> arr){
    int ans = INT16_MIN , ind =-1;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i] > ans ){
            ans = arr[i];
            ind = i;
        }
    }
    return ind;
}

int main(){
    vector<int> arr(5);
    for(int i = 0 ; i<5 ; i++){
        cin>>arr[i];
    }

    cout<<peakIndex(arr);

    return 0;
}
