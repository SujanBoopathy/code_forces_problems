#include<iostream>
using namespace std;
int main(){
    long long int x,count=0;
    cin>>x;
    while(x/2!=0){
        if(x%2==1)
            count++;
        x/=2;
    }
    cout<<count+1<<endl;
    return 0;
}