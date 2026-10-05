#include <iostream>
using namespace std;
int main (){
    int ph,ch,mat,bio,eng;
    cout<<"Enter the marks of physics : ";
    cin>>ph;
    cout<<"Enter the marks of Chemistry : ";
    cin>>ch;
    cout<<"Enter the marks of maths : ";
    cin>>mat;
    cout<<"Enter the marks of Biology : ";
    cin>>bio;
    cout<<"Enter the marks of English : ";
    cin>>eng;

    float percent;
    percent = (ph + ch + mat + bio + eng)/5.0;
    cout<<"\nThe percentage scored is "<<percent <<endl<<"The Grade is ";

    if ( percent <=100 && percent >90){
         cout<<"EXCELLENT";
    }
    else {
         if (percent >80){
            cout<<"Very Good";
        }   
        else {
             if (percent >70){
                cout<<"Good";
             }
            else{
                if ( percent >60){
                     cout<<"Can do better";
                }
                else {
                    if (percent >50){
                         cout<<"Average";
                     }
                    else{
                         if (percent >40){
                              cout<<"Below Average";
                        }
                        else{
                             if ( percent <=40 ){
                                cout<<"Fail";
                             }
                            
                        }                   
                        
                    }
                    
                }
                
            }
            
        } 
        
    }
}