#include<iostream>
using namespace std;
int main(){
    int row,col,flag=0;
    cin>>row>>col;
    char color;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>color;
            if(color=='C' || color=='M' || color=='Y'){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}