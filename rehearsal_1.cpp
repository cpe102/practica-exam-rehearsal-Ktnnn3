#include<iostream>
#include<string>
using namespace std;
main(){
    string name;
    double g;
    cout<<"What is your name?: ";
    cin>>name;
    cout<<"What is your GPA?: ";
    cin>>g;
    if(g >= 3.50){
        cout<<name<<" InW Jrim Jrim!!!";
    }else{
        cout<<"Try harder, "<<name<<"!!!";
    }
return 0;


}
