#include <iostream>
class BaseA{
public:
    virtual float getA()=0;
};

class BaseB{
public:
    virtual float getB()=0;
};

class core{
    BaseA* a;
    BaseB* b;
public:
    core(BaseA*_a,BaseB*_b):a(_a),b(_b){}
    float calc(){
        return a->getA()+b->getB();
    };
};

class BaseA1: public BaseA{

    float getA(){
        return 2;
    }

};

class BaseB1: public BaseB{

    float getB(){
        return 6;
    }


};

int main() {

    core my_core(new BaseA1, new BaseB1);
    std::cout<<my_core.calc()<<'\n';
    return 0;
}