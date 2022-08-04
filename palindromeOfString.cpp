#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[20];
    cout<<"Enter string: ";
    cin>>str;

    int flag=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1; 
            break;
        }
        
    }

    if(flag) cout<<"not a palindrome";
    else cout<<"palindrome";
    return 0;
}
