#include<iostream>
using namespace std;

class rectange {
public:
    int l;
    int b;

    rectange(){  // no arguments passed;
        l =0;
        b= 0;
    }

    rectange(int x,int y){  //parameterised contructor - arguments passed;
        l = x;
        b = y;
    }

    rectange(rectange& r){ // copy constructor - initialise an obj by another existintg object;
        l = r.l;
        b = r.b;
    }
    ~rectange(){ //destructor 
        cout<<"destructor is colled"<<endl;
    }
};
int main(){
    rectange* r1 = new rectange();
    cout<<r1->l<<" - "<<r1->b<<endl;
    delete r1;

    rectange r2(2,3);
    cout<<r2.l<<" - "<<r2.b<<endl;
    
    rectange r3 = r2;
    cout<<r3.l<<" - "<<r3.b<<endl;

    return 0;
}