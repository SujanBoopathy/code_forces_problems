#include<iostream>
using namespace std;

int main(){
    int n,m;
    long long int c=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    c=arr[0]-1;
    for(int i=0;i<m-1;i++){
        if(arr[i]>arr[i+1]){
            c+=(n-arr[i])+(arr[i+1]-1)+1;
        }
        else{
            c+=arr[i+1]-arr[i];
        }
    }
    cout<<c<<endl;
    return 0;
}
