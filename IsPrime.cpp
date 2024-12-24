#include <iostream>
using namespace std;

int main(){

    int n;
    bool IsPrime = true;
    int i =2;

    cout<<"Please enter a number:"<<endl;
    cin >> n;
    while(i*i<=n){
        if(n%i==0){
            IsPrime = false;
            break;
        }
        i++;
    }
    if (IsPrime==true){
        cout<<"The number you've entered is a prime number!\n";

    }else{
        cout<<"Not a prime number\n";
    }
    return 0;
}