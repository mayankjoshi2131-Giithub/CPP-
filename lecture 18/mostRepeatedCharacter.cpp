#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a string : ";
    getline(cin,s);
    int n = s.size();
    vector <int> arr(26,0) ;
    for (int i =0; i < n ; i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii- 97]++;
    }
    int max = 0;
    for (int i =0; i<26; i++){
        if (arr[i] > max)  max = arr[i] ;
    }
    for (int i =0; i<26; i++){
        if (arr[i] == max){
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        } 
    }
}