//going through w3school exercises basically


#include <iostream>
#include "arrays.cpp"
using namespace std;

class MyClass{
public: void myMethod();
    string is = "is";
    int nonconstant = 5;
    const int constant = 7;
};

void MyClass::myMethod(){
    cout << "Learning c++" << endl;
    cout << "this " <<  is <<  " fun" <<endl;
    cout << nonconstant <<endl;
    cout << constant << endl;
    nonconstant = 60;
    cout <<nonconstant<<endl;
}

int main() {
    MyClass obj;
    obj.myMethod();

    string userInput;

    cout<<"give a number"<<endl;
    cin>>userInput;
    cout<<"User's input is:" << userInput<< endl;
    userInput.append(" kg");
    cout<<userInput<<endl;
    userInput = userInput + " of apples";
    cout<<userInput<<endl;

    int x=10, z=12, y=5;
    cout << x+z+y << endl;
    string u = "hello";
    cout<<u<<endl;
    cout<<u.length()<<endl;
    for(char i : u){
        cout<<i<< " ";
    }

    cout<<" Tell me something interesting"<<endl;
    cin.ignore();
    getline(cin, u);

    cout<<u<<endl;

    string animals[5]= {"Tosia", "Zuzia", "Whisky", "Hugo", "Cola"};
    cout<<animals[2]<<endl;
    for(int i=0; i<sizeof(animals); i++){
        cout<<i<<endl;
    }

    int numbers[]={};
    for(int i=0; i<10; i++){
        numbers[i] = i+1;
        cout<<numbers[i]<<endl;
    }

    cout<< sizeof(numbers)<<endl;

    return 0;
}
