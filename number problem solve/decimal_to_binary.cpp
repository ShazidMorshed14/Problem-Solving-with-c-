#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   long long int num;
   cin>>num;
   int rem;

   int n[100];
   int i=0;
   while(num>0){
    rem=num%2;
    num=num/2;
    n[i]=rem;
    i++;
   }

   for(int l=0;l<i;l++){
    cout<<n[l];
   }
   cout<<endl;
    int temp1=0;
    int temp2=0;


    int si=0;
    int ei=i-1;
    while(si<i/2){
        temp1=n[si];
        temp2=n[ei];
        n[si]=temp2;
        n[ei]=temp1;
        si++;
        ei--;
    }
    for(int l=0;l<i;l++){
        cout<<n[l];
    }

}
