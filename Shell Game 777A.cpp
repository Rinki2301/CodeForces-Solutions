#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int movement, last;
    cin>>movement>>last;
    movement = movement%6;
    if(movement==1)
    {
        if(last==1)
            cout<<0;
        else if(last==0)
            cout<<1;
        else if(last==2)
            cout<<2;
    }
    else if(movement==2)
    {
        if(last==1)
            cout<<2;
        else if(last==0)
            cout<<1;
        else if(last==2)
            cout<<0;
    }
    else if(movement==3)
    {
        if(last==0)
            cout<<2;
        else if(last==1)
            cout<<1;
        else if(last==2)
            cout<<0;
    }
    else if(movement==4)
    {
        if(last==1)
            cout<<0;
        else if(last==0)
            cout<<2;
        else if(last==2)
            cout<<1;
    }
    else if(movement==5)
    {
        if(last==1)
            cout<<2;
        else if(last==0)
            cout<<0;
        else if(last==2)
            cout<<1;
    }
    else if(movement==0)
    {
        if(last==1)
            cout<<1;
        else if(last==0)
            cout<<0;
        else if(last==2)
            cout<<2;
    }
    return 0;
}