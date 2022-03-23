#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int s=0,count=0;
    sum/=2;
    sort(arr,arr+n);

    for(int i=n-1;i>=0;i--){
        s+=arr[i];
        count++;
        if(s>sum){
            break;
        }
        
    }
    cout<<count<<endl;

    return 0;
}