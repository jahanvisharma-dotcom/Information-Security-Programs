
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,ch;
    string s,encrpt,decrpt;
    int key;
    cout<<"Enter the key\n";
    cin>>key;
    cout<<"Enter the message\n";
    cin>>s;
          for(i=0;i<s.size();i++){
        if(s>="A" && s <= "Z"){
        encrpt+=(s[i]-'A'+key)%26+'A';}
    else{
        encrpt+=(s[i]-'a'+key)%26+'a';}}
    cout<<"\n\nEncrypted message : "<<encrpt<<'\n';
     for(i=0;i<s.size();i++){
            if(encrpt>="A" && encrpt <= "Z"){
        decrpt+=(encrpt[i]-'A'-key)%26+'A';}
    else{
        decrpt+=(encrpt[i]-'a'-key)%26+'a';}}
   cout<<"\n\nDecrypted message of above Encrypted message : "<<decrpt<<'\n';
    return 0;
}
