#include<iostream>
using namespace std;

int main(){
    int n,m,count=0;
    cin>>n>>m;

    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp=arr[m-1];

    for(int i=0;i<n;i++){
        if(temp<=arr[i] && arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;

    
    return 0;
}