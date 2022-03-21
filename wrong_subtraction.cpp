#include<iostream>
using namespace std;

int main(){
    int k;
    long long int n;
    cin>>n>>k;

    while(n>0 && k>0){
        if(n%10==0){
            n/=10;
        }
        else{
            n-=1;
        }
        k--;
    }
    cout<<n<<endl;
    return 0;
}