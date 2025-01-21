#include <iostream>
using namespace std;
int hi = 1;
int main(){
    while (hi == 1)
    {
    float num1;
    float num2;
    int opratian;
    cout << "enter first num" << endl;
    cin>>num1;
    cout << "enter second num" << endl;
    cin>>num2;
    cout << "enter a opratian 1+|2-|3*|4%|5 exit"<< endl;
    cin>>opratian;
    switch(opratian){
        case 1:
            cout << num1+num2 << endl;
            break;
        case 2:
            cout << num1-num2 << endl;
            break;
        case 3:
            cout << num1*num2 << endl;
            break;
        case 4:
            cout << num1/num2 << endl;
            break;
        default:
            cout << "error" << endl;
            break;
        case 5:
            cout << "exit" << endl;
            hi = 2;
    }}
    return 0;
}
