#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d,e;

    int col=0,row=0;
    for(int i=1;i<=5;i++){

        cin>>a>>b>>c>>d>>e;

        if(a==1) c=1;
        else if(b==1) col=2,row=i;
        else if(c==1) col=3,row=i;
        else if(d==1) col=4,row=i;
        else if(e==1) col=5,row=i;







    }

    int sum=abs(row-3)+abs(col-3);
    cout<<sum;



}

