#include<iostream>
using namespace std;

class parent{
    public:
        parent(){
            cout<<"this is parent class"<<endl;
        }
};

class child{
    public:
        child(){
            cout<<"this is child class"<<endl;
        }
};

class grandchild: public child, public parent{
    public:
        grandchild(){
            cout<<"this is grandchild class"<<endl;
        }
};

int main(){
    grandchild c;
    return 0;
}