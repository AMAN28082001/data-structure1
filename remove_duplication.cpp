#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 3, 3, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int t[size-1];
    t[0]=arr[0];
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if(t[count-1]!=arr[i]){
          t[count] = arr[i];
          count++;
        }
    }
    for (int i = 0; i<count; i++)
    {
        arr[i]=t[i];
    }
    for(int i=0;i<count;i++){
    cout<<arr[i]<<" ";
    }
    for(int i=0;i<size-count;i++){
        cout<<"-"<<" ";
    }
}