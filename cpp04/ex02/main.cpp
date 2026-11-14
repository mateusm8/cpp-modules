#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal animal;

	Dog dog;
	dog.setDogIdeas("Original idea", 0);

	Dog dogCopy(dog);
	Dog dogAssigned;
	dogAssigned = dog;

	dogCopy.setDogIdeas("Copy idea", 0);
	dogAssigned.setDogIdeas("Assigned idea", 0);

	std::cout << "Dog original: " << dog.getDogIdeas(0) << std::endl;
	std::cout << "Dog copy: " << dogCopy.getDogIdeas(0) << std::endl;
	std::cout << "Dog assigned: " << dogAssigned.getDogIdeas(0) << std::endl;

	Cat cat;
	cat.setCatIdeas("Original idea", 0);

	Cat catCopy(cat);
	Cat catAssigned;
	catAssigned = cat;

	catCopy.setCatIdeas("Copy idea", 0);
	catAssigned.setCatIdeas("Assigned idea", 0);

	std::cout << "Cat original: " << cat.getCatIdeas(0) << std::endl;
	std::cout << "Cat copy: " << catCopy.getCatIdeas(0) << std::endl;
	std::cout << "Cat assigned: " << catAssigned.getCatIdeas(0) << std::endl;

	return (0);
}
