#include <iostream>
#include <deque>

using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i : d){
        cout<<i<<" ";

    }   cout<<endl;

    // d.pop_back();
    // d.pop_front();

    // for(int i : d){
    //     cout<<i<<" ";
    // }


    cout<<"Print zeroth index element --> "<<d.at(0)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;

    cout<<"Tell me empty or not : " <<d.empty()<<endl;   //op will be 0 , which means false
    
    cout<<"before erase size "<<d.size()<<endl;
    d.erase(d.begin(),d.begin() + 1);
    cout<<"after erase size "<<d.size()<<endl;

    for(int i : d){
        cout<<i<<endl;
    }
    return 0;
}
