#include <iostream>
#include <string>
using namespace std;


int main(){
    int F,E,J;
    string status;
    cout <<"Enter your age: ";
    cin >>F;
    
    if(F<=20){
        cout <<"Enter your height: ";
        cin>>E;
        if(H<160){
            status = "UNFRIEND";
        }else if (E<175){
            status = "FRIEND";
        }else{
            cout <<"Enter your property: ";
            cin>>J;
        
            if(J>69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }
    
    else if (F<30){
        cout <<"Enter your property: ";
        cin>>J;
        if(P>10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else{
        status = "UNFRIEND";
    }
    cout << "Your status = "<< status;
}