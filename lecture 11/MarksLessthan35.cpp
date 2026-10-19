#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter number of students : ";
    cin>>n;

    int marks[n] ;
    for (int i = 0; i<= n-1; i++){

        cout<<"enter the marks of student with roll number " <<i<<"  : ";
        cin>>marks[i];
    }
    cout<<"The roll numbers of the students having marks less than 35 are : ";
    for (int i = 0; i <= n-1; i++){
        if(marks[i] < 35){
            cout<<i<<" ,";
        }
    }
}