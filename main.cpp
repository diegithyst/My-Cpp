//going through w3school exercises basically


#include <iostream>
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
    getline(cin, u);
    cout<<u;

    return 0;
}
