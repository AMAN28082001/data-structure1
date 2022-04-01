#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,2,1,2,0,1,0,2,0,1,2,1,0,0,2,1,2,2};
    int a=0;
    int b=0,c=0;
    int p,q,r;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            a=a+1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            b=b+1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            c=c+1;
        }
    }
    for(int i=0;i<a;i++){
        p=0;
        cout<<arr[p];
    }
    for(int i=0;i<b;i++){
        q=2;
        cout<<arr[q];
    }
    for(int i=0;i<c;i++){
        r=1;
        cout<<arr[r];
    }
    
for (int i = 0; i < n; i++)
{
    /* code */cout<<arr[i]<<" ";
}


}