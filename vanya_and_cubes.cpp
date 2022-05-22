#include<iostream>
using namespace std;
int reduce(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int fact=1,count=0;
    while(n>0){
        if((n-reduce(fact))>=0)
        {
            n=n-reduce(fact);
            count++;
        }
        
        fact++;
        
    }
    cout<<count<<endl;
    return 0;
}