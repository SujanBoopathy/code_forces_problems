#include<iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int num;
        cin>>num;
        if(num%6==0){
            num/=6;
        }
        else{
            num*=2;
        }
    }
    return 0;
}