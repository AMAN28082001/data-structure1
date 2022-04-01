#include<bits/stdc++.h>
using namespace std;
void rto(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rt(int arr[],int size,int k){
    rto(arr,0,size-1);
    rto(arr,0,k-1);
    rto(arr,k,size-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
     int k;
     cin>>k;
     rt(arr,size,k);
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }
}