#include<iostream>
using namespace std;
int main(){
    int n,sum1=0,sum2=0,temp;
    cin>>n;
    int mid=n/2;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<mid;i++){
        sum1+=a[i];
    }
    for(int i=n-1;i>=mid;i--){
        sum2+=a[i];
    }
    cout<<sum2<<" "<<sum1<<endl;
    return 0;
}