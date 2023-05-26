#include <iostream>
using namespace std;
template <class T>
class Compare{
    public:
    Compare(T a,T b){
        this->a=a;
        this->b=b;
    }
    T Max(){
        return this->a>this->b ? this->a:this->b;
    }
    T a;
    T b;
};


int main(){
    Compare<int> cmp1(4,3);
    Compare<double> cmp2(4.0,3.0);
    Compare<char> cmp3('c','d');
    cout<<cmp1.Max()<<endl;
    cout<<cmp2.Max()<<endl;
    cout<<cmp3.Max()<<endl;

    return 0;
}