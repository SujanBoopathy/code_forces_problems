#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[20];
    cout<<"Enter string: ";
    cin>>s;

    int flag=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!=s[len-i-1]){
            flag=1; 
            break;
        }
        
    }

    if(flag) cout<<"not a palindrome";
    else cout<<"palindrome";
    return 0;
}