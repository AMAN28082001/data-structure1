#include<bits/stdc++.h>
using namespace std;
void lto(int arr[],int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
}
void lt(int arr[],int size,int k){
    for(int i=0;i<k;i++){
        lto(arr,size);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
     int k;
     cin>>k;
     lt(arr,size,k);
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }
}