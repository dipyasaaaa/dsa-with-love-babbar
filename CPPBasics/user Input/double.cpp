#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sal;
    cout<<"Enter your salary: ";
    cin>>sal;
    cout<<"Your salaray is: "<<fixed<<setprecision(8)<<sal<<endl;
    return 0;
}