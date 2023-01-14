#include<iostream>
using namespace std;


int main(){
        int z;
        cin>>z;

        //cout<<(y%10 && y%100 && y%1000 && y%10000);

        int y=z+1;
        for(z;y<=9000;y++){
            if(y%10 != y%100 && y%100 != y%1000 && y%1000 != y%10000){
                cout<<y;
                break;
            }

        }



}
