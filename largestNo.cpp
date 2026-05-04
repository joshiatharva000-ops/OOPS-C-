#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"Enter Three Numbers:"<<endl;
cin>>a >>b >> c;

if(a>=b && a>=c){
cout<<"Largest number is:" <<a;
}

else if(b>=a && b>=c){
cout<<"largest number is:" <<b;
}

else {
cout<<"Largest number is:" <<c;
}

return 0;
}