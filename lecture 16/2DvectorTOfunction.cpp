#include <iostream>
#include <vector>
using namespace std;
void change2D ( vector <vector <int> > &v){
    v[0][0] = 100;
}
void length (vector <vector <int> > &v){
    cout<<v.size();
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);

    vector<int> v3;
    v3.push_back(8);
    v3.push_back(9);

    vector<int> v4;
    v4.push_back(10);
    v4.push_back(11);
    v4.push_back(12);
    v4.push_back(13);

    vector<vector<int>> v; //{{1,2,3},{4,5,6,7},{8,9},{10,11,12,13}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    cout<<v[0][0]<<endl;
    change2D (v);
    cout<<v[0][0]<<endl;
    cout<<"The length of vector v is : ";
    length (v);
    


}
