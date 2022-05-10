#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int testcase,temp,c1=0,c2=0;
        cin>>testcase;
        for(int i=0;i<testcase;i++){
            cin>>temp;
            if(temp==1)
                c1++;
            else 
                c2++;
        }
        if(c1%2==0 && c2%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}