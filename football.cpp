#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int count=1;
    string str;
    cin>>s;
    for(int i=1;i<=str.length();i++){
        if(str[i]==str[i-1] ){ count++;
        if(count==7){
            cout<<"YES"<<endl;
            return 0;
        }
        }
        else{
            count=1;
        }
        
    }
    
    cout<<"NO"<<endl;
    return 0;
}
