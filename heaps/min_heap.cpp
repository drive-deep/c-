#include <bits/stdc++.h>
using namespace std;
int arr[100000];



void min_heapify( int arr[],int i,int n){
    
    int left=(2*i);
    int right=(2*i)+1;
    int smallest;
    if(left<=n && arr[left]<arr[i]){
        smallest=left;
    }
    else{
        smallest=i;
    }
    
    if(smallest<=n && arr[right]<arr[smallest]){
        smallest=right;
    }
    
    if(smallest!=i){
        swap(arr[i],arr[smallest]);
        min_heapify(arr,smallest,n);
    }
    
}

void build_minheap( int arr[],int n){
    for(int i=n/2; i>=1; i--){
        min_heapify(arr,i,n);
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
    
    build_minheap(arr,n);
   
  
    return 0;
}
