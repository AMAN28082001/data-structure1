#include<bits/stdc++.h>
using namespace std;
vector<int> pairSum(vector<int> arr,int S){
    
}
int main(){
    vector<int> arr{10,5,2,3,-6,9,11};
    int S=4;
    auto p=pairSum(arr,S);
    if(p.size()==0){
        cout<<"No such pair";
    }
    else{
        cout<<p[0]<<","<<p[1]<<endl;
    }
}