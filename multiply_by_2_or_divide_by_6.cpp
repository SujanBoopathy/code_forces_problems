#include<iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int num,count=0;
        cin>>num;
        while(num>1){
            if(num%6==0){
            num/=6;
            }
            else{
                num*=2;
            }
            count++;
        }
        if(num==1)
            cout<<count<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}