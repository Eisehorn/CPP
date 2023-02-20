#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void) {
    if (std::rand() % 2 == 0) {
        std::cout<<"A generated"<<std::endl;
        return (new A());
    }
    if (std::rand() % 2 == 0) {
        std::cout<<"B generated"<<std::endl;
        return (new B());
    }
    std::cout<<"C generated"<<std::endl;
    return (new C());
}

void    identify(Base *p) {
    if (dynamic_cast<A*>(p)) {
        std::cout<<"Type A"<<std::endl;
        return ;
    }
    else if (dynamic_cast<B*>(p)) {
        std::cout<<"Type B"<<std::endl;
        return ;
    }
    else
        std::cout<<"Type C"<<std::endl;
}

void    identify(Base &p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout<<"Type A"<<std::endl;
        return ;
    } catch (std::exception ex) {};
    try {
        (void)dynamic_cast<B&>(p);
        std::cout<<"Type B"<<std::endl;
        return ;
    } catch (std::exception ex) {};
        std::cout<<"Type C"<<std::endl;
}

int main() {
    for (int i = 0; i < 10; i++) {
        Base *a = generate();
        identify(a);
        identify(a);
        delete  (a);
    }
}