#include<iostream>
using namespace std;

int main(){
    int E_num =0;
    int O_num =0;
    for(int i;i!=0;){
        cout << "Enter an integer: ";
        cin>>i;
        if(i!=0){
            if(i%2==0){
                E_num++;
            }
            else{
                O_num++;
            }
        }
    }

    cout << "#Even numbers = "<<E_num<<endl;
    cout << "#Odd numbers = "<<O_num;
    return 0;
}