#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    a=2,b=n-2;
    while(isPrime(a) || isPrime(b)){
        a++;
        b--;
    }
    cout<<a<<" "<<b;
    return 0;
}