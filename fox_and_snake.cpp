#include<iostream>
using namespace std;
int main(){
    int col,row,c=0;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++){
                cout<<"#";
            }
        }
        else{
            if(c%2==0){
                for(int j=0;j<col;j++){
                    if(j!=(col-1)){
                        cout<<".";
                    }
                    else{
                        cout<<"#";
                    }
                }
            }
            else{
               for(int j=0;j<col;j++){
                    if(j!=0){
                        cout<<".";
                    }
                    else{
                        cout<<"#";
                    }
                } 
            }
             c++;

        }
        cout<<endl;
    }
    return 0;
}