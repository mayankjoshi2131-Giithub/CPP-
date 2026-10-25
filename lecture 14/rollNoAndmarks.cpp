#include <iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter the number of students : ";
    cin>>m;
    int arr[m][2]; // we need only two columns for roll no. and marks
    cout<<"Enter the roll no of student and then marks : ";
    for (int i = 0 ; i < m ; i ++){
        for (int j = 0; j < 2; j++){
            cin>>arr[i][j];
        }
    }
     for (int i = 0 ; i < m ; i ++){
        for (int j = 0; j < 2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    



}
