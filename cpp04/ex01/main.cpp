#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    Animal* animal[10];
    Brain* brain;

    for(int i = 0; i < 10; i++) {
        if (i < 5)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
            std::cout<<animal[i]->getType()<<std::endl;
    }
    for(int i = 9;i >= 0; i--) {
    brain = animal[i]->getBrain();
	brain->ideas[0] = "I'm angry";
	brain->ideas[1] = "Time to hunt!";
	brain->ideas[2] = "Hehehehehehehe";
	brain->ideas[3] = "MARLENE!";
    }
    for(int i = 9; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
	        std::cout<<animal[i]->getBrain()->ideas[j]<<std::endl;
        }
    }
    for (int i = 9; i >= 0; i--)
        delete animal[i];
    return 0;
}