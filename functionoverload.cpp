#include<iostream>
using namespace std;

class sum{
public:
    void add(int a,int b){
        int sum = a+b;
        cout<<sum<<endl;
    }
    void add(int a,int b,int c){
        int sum = a+b+c;
        cout<<sum<<endl;
    }
    void add(float a,float b){
        float sum = a+b;
        cout<<sum<<endl;
    }
    void add(float a,float b,float c){
        float sum = a+b+c;
        cout<<sum<<endl;
    }
};
int main(){

    sum s;
    s.add(2,3);
    s.add(3,4,5);
    s.add(float(3.4),float(4.5));
    s.add(float(3.4),float(4.5),float(6.6));
    return 0;
}