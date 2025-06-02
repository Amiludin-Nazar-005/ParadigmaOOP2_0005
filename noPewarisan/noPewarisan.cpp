#include <iostream>
using namespace std;

class baseClass{
    public: 
    virtual void perkenalan(){
        cout << "halo saya function dari base class";
    }
};

class derivedClass : public baseClass{
    public:
    void perkenalan(){
        cout << "halo saya function dari drived class";
    }
};

int main (){
    derivedClass a;
    a.perkenalan();
    return 0;
}
