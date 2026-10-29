#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector < vector <int> > v (3, vector <int> (4,2));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4 ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
     cout<<"\n";
    // to print the size of 2d vector
    // for rows
    cout<<"The number of rows are : ";
    cout<<v.size()<<endl;
    // for columns
    cout<<"The number of columns are : ";
    cout<<v[0].size()<<endl;
}
