#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool isPalindrom(string s){
   int s_length=s.length();
   int i=0;
   int j=s_length-1;
   while(i<j){
     while(i<j && isalnum(s[i])==0){
        i++;
     }
     while(i<j && isalnum(s[j])==0){
        j--;
     }
     if(toupper(s[i])!=toupper(s[j])){
        return false;
     }else{
        i++;
        j--;
      }
   }
   return true;
}

int main(){

 string s;
 cout<<"Enter sentence: ";
 getline(cin,s);

 bool result=isPalindrom(s);

 if (result==true){
    cout<<"It's a plaindrom sentence."<<endl;
 }else{
    cout<<"It's not a plaindrom sentence."<<endl;
 }

}

