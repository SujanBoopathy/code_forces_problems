#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,sum1=0,sum2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i-=2){
        sum1+=a[i];
    }
    for(int i=n-2;i>=0;i-=2){
        sum2+=a[i];
    }
    cout<<sum1<<" "<<sum2<<endl;
}