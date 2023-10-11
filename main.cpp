#include <bits/stdc++.h>
using namespace std;

bool validateNumber(string s){
    int flag = 0;
    if(s[0]=='0')   flag =1;
    if(s.substr(0, 3)=="+91")   flag = 3;
    while( flag!=0 && s[flag]==' ') flag++;

    if(!(s[flag]=='7' || s[flag] == '8' || s[flag]=='9')){
        cout<<"starting digit must be either 7 or 8 or 9"<<endl;
        return false;

    }  
    if(s.size()-flag!=10){
        cout<<"The number must be of 10 digits"<<endl;
        return false;
    }
    for(int i=flag+1; i<s.size(); i++){
        if(s[i] < '0' || s[i] > '9'){
            cout<<"digits must be number"<<endl;
            return false;
        }
    }
    return 1;
}



int main(){
    string s;
    getline(cin, s);
    cout<<validateNumber(s)<<endl;
    return 0;
}