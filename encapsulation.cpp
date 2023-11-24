#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    int set(int n){
        x = n;
    }
    int get(){
        return x;
    }
};
int main(){
    abc a;
    a.set(3);
    cout<<a.get()<<endl;

    return 0;
}