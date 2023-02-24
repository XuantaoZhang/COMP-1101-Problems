#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Please input the branch size:"<<endl;
    do{
    cin>>size;
    }while (size%2 != 0 || size<=0);

    char letter = 'A';
    char space = ' ';

    for(int i = 0; i<size; i++){
        for(int j = 0; j<(size*2); j++){
            if (j<size-i-1 || j>size+i-1){
                cout<<space;
            }
            else {
                cout<<letter;
                letter= letter == 'Z' ? 'A' : letter+1;
            }
        }
        cout<<endl;
    }

    for(int k = 0; k<size/2;k++){
        for(int l=0; l<(size*2);l++){
            if( l == size || l==size-2){
                cout<<letter;
            }
            else if (l==size+1){
                cout<<space;
                letter=letter=='Z'?'A':letter+1;
            }
            else{
                cout<<space;
            }
        }
        cout<<endl;
    }
    return 0;}