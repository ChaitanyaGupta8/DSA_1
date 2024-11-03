#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity -->"<<v.capacity()<<endl;
            //capacity is kitni storage/memeory assign ho rkhi hai
            //size is kitne elts iss vector mai hai
    v.push_back(1);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i : v){
        cout <<i<<" ";
    }   cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i : v){
        cout <<i<<" ";
    }   cout<<endl;

    cout<<"before clear "<<v.size()<<endl;
    v.clear();
    cout<<"after clear "<<v.size()<<endl;
    //after clear size of vector becomes zero not capacity
    //front and back are same as in array

    vector<int> a(5,1);

    cout<<"print a: "<<endl;
    for(int val : a){
        cout<<val<<" ";
    }   cout<<endl;

    vector<int> last(a);
    for(int val : last){
        cout<<val<<" ";
    }
    return 0;
}
