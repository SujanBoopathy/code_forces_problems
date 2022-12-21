#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>size;
    for(int i=0;i<size;i++){
        char temp[100];
        cin>>temp;
        if(strcmp(temp,"X++")==0) count++;
        else if(strcmp(temp,"++X")==0) ++count;
        else if(strcmp(temp,"X--")==0) count--;
        else if(strcmp(temp,"--X")==0) --count;

    }

    cout<<count<<endl;
    return 0;
}
