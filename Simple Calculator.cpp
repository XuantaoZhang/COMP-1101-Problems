#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"MENU"<<endl;

    cout<<" \t1. Divide. a/b\n \t2. Multiply. a*b\n \t3. Power. a^b\n \t4. Square root. sqrt(a)"<<endl;

    cout<<"Enter your choice:"<<endl;
    int x;
    cin>>x;

    int a, b;

    if (x == 1){
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;

        if (b != 0 ){
            cout<<"a/b="<<(double)a/b<<endl;
        }
        else{
            cout<<"error"<<endl;
        }
        
    }

    else if (x==2){
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
        
        cout<<"a*b="<<(double)a*b<<endl;
    }

    else if (x==3){
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
        double power = 1;
        int count = 0;

        if (a != 0){
            if (b>0){
                while (count<b){
                    power *= a;
                    count+=1;
                }
            }
            else if (b==0){
                power = 1;
            }

            else{
                int reverse_b = -b;
                double reverse_power = 1;
                while (count<reverse_b){
                    reverse_power *= a;
                    count+=1;
                }
                power = 1/reverse_power;


            }
            cout<<"a^b="<<power<<endl;
        }
        else{
            if(b>0){
                power = 0;
                cout<<"a^b="<<power<<endl;
            }
            else{
                cout<<"error"<<endl;
            }
        }
    }

    else if (x==4){
         cout<<"Enter a number:"<<endl;
         cin>>a;
         double squareroot;

         if (a>=0){
            squareroot = sqrt(a);
            cout<<"sqrt("<<a<<")="<<squareroot<<endl;
         }
         else{
            cout<<"error"<<endl;
         }
    }

    else{
        cout<<"error"<<endl;
    }
    return 0;
}