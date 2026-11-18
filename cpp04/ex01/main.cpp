#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "----------------- ANIMAL OBJECTS -----------------" << std::endl;

	Animal* animals[4];

	for (size_t i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "----------------- DEEP COPY -----------------" << std::endl;

	Dog dog;
	Cat	cat;
	dog.setDogIdeas("Original dog idea", 0);
	cat.setCatIdeas("Original cat idea", 0);
	Dog copyDog(dog);
	Cat	copyCat(cat);
	Dog assignmentDog;
	Cat	assignmentCat;
	assignmentDog = dog;
	assignmentCat = cat;

	std::cout << "----------------- BEFORE CHANGES -----------------" << std::endl;

	std::cout << "Dog idea: " << dog.getDogIdeas(0) << std::endl;
	std::cout << "copyDog idea: " << copyDog.getDogIdeas(0) << std::endl;
	std::cout << "assignmentDog: " << assignmentDog.getDogIdeas(0) << std::endl;
	std::cout << "Cat idea: " << cat.getCatIdeas(0) << std::endl;
	std::cout << "copyCat idea: " << copyCat.getCatIdeas(0) << std::endl;
	std::cout << "assignmentCat: " << assignmentCat.getCatIdeas(0) << std::endl;

	// std::cout << "----------------- SETTING IDEAS -----------------" << std::endl

	copyDog.setDogIdeas("Dog copy idea", 0);
	assignmentDog.setDogIdeas("Dog assignmet idea", 0);
	copyCat.setCatIdeas("Cat copy idea", 0);
	assignmentCat.setCatIdeas("Cat assgnment idea", 0);

	std::cout << "----------------- AFTER CHANGES -----------------" << std::endl;

	std::cout << "Dog idea: " << dog.getDogIdeas(0) << std::endl;
	std::cout << "copyDog idea: " << copyDog.getDogIdeas(0) << std::endl;
	std::cout << "assignmentDog: " << assignmentDog.getDogIdeas(0) << std::endl;
	std::cout << "Cat idea: " << cat.getCatIdeas(0) << std::endl;
	std::cout << "copyCat idea: " << copyCat.getCatIdeas(0) << std::endl;
	std::cout << "assignmentCat: " << assignmentCat.getCatIdeas(0) << std::endl;

	std::cout << "----------------- ANIMALS DESTRUCTORS -----------------" << std::endl;

	for (size_t i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "----------------- DOG AND CAT DESTRUCTORS -----------------" << std::endl;

	return (0);


}
