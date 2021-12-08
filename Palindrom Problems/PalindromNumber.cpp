#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  int n,last_digit ;
  cout<<"Enter number: ";
  cin>>n;
  int givenNumber=n;
  int reversedNumber=0;
  while(n>0){
    last_digit=n%10;
    reversedNumber=(reversedNumber*10)+last_digit;
    n=n/10;
  }

   cout<<"The reversed number is:"<<reversedNumber<<endl;

   if(givenNumber == reversedNumber){
    cout<<"It's a Palindrom Number"<<endl;
   }else{
      cout<<"Not a Palindrom Number"<<endl;

   }




}
