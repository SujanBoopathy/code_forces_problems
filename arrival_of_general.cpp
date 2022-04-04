#include<iostream>
using namespace std;

int main(){
    int n,mini=9999,maxi=0,m1,n1,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxi){
            maxi=a[i];
            m1=i;
        }
        if(a[i]<=mini){
            mini=a[i];
            n1=i;
        }
    }
     while(m1>0){
        swap(a[m1],a[m1-1]);
        if((m1-1)==n1){
            n1++;
        }
        m1--;
        

        count++;
    }
    while(n1<n-1){
        swap(a[n1],a[n1+1]);
        n1++;
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}