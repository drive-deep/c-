#include <bits/stdc++.h>
using namespace std;
int arr[100000];



void max_heapify( int arr[],int i,int n){
    
    int left=(2*i);
    int right=(2*i)+1;
    int largest;
    if(left<=n && arr[left]>arr[i]){
        largest=left;
    }
    else{
        largest=i;
    }
    
    if(largest<=n && arr[right]>arr[largest]){
        largest=right;
    }
    
    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest,n);
    }
    
}

void build_maxheap( int arr[],int n){
    for(int i=n/2; i>=1; i--){
        max_heapify(arr,i,n);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
     
    
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        
    }
    
    build_maxheap(arr,n);
   
   
  
    return 0;
}
