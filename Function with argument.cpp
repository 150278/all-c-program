/*
*Function with argument
*Data :20-feb-2022
*Abhishek sahu
*/

#include<iostream>
using namespace std;

int myfun(int i);
int myfun(int i,int j);
int myfun(int i,int j, int k);


int main()
{
    cout<<"calling myfun(10)"<<myfun(10)<<endl;
    cout<<"calling myfun(10,20)"<<myfun(10,20)<<endl;
    cout<<"calling myfun(10,20,30)"<<myfun(10,20,30)<<endl;
        return 0;
}

int myfun(int i){
    return i;
}


int myfun(int i, int j){
    return i+j;
}

int myfun(int i,int j, int k){
    return i+j+k;
}