#include <iostream>
class baseinterface{
public:

    virtual void interfacea()= 0;
};
class achieve: public baseinterface{
public:
    achieve(){};
    void interfacea(){
        std::cout << "achieve1\n";
    }
    void character(){
        std::cout << "I am achieve1\n";
    }
};
class achieve2:public achieve{
public:
    achieve2(){};
    void interfacea(){
        std::cout << "achieve_son\n";
    }
};
void interface(){
    baseinterface* instance;
    instance = new achieve();
    instance->interfacea();
    delete instance;

    instance = new achieve2();
    instance->interfacea();
   // (*instance).interfacea()
    instance->character();//报错
    delete instance;

    achieve2 instan;
    instan.interfacea();
    instan.character();

}
int main() {
    std::cout << "################" << std::endl;
    interface();
    return 0;
}