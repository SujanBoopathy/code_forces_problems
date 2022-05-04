#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,d=0;
        cin>>x;
        int a=x%10;
        string s=to_string(x);
        for(int i=0;i<s.size();i++){
            d+=i+1;
        }
        cout<<((a-1)*10)+d<<endl;
    }
    return 0;
}

