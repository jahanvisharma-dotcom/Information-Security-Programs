#include<iostream>
#include<string.h>
using namespace std;
int main() {
char msg[100];
int i, j, length, choice;
cout<<"Enter the plain text: ";
cin.getline(msg, 100);
length = strlen(msg);
cout<<"Enter your choice 1. Encryption 2.Decryption : ";
string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string b = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA9876543210";
cin>>choice;
  if (choice == 1){
    char ch;
     for(int i=0;i<length;i++){
    ch = msg[i];
    int j = a.find(ch);
    msg[i]=b.at(j);}
    cout<<"Encryped message : "<< msg;}
    else if (choice == 2){
    char ch;
    for (int i=0;i<length;i++){
    ch = msg[i];
    int j = b.find(ch);
    msg[i]=a.at(j);}
    cout<<"Decryped message : "<< msg;}
else{
    cout<<"Not a valid choice";}}

