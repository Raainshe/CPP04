/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:05:04 by rmakoni           #+#    #+#             */
/*   Updated: 2025/07/18 10:09:59 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Testing correct polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    // Clean up memory
    delete meta;
    delete j;
    delete i;
    
    std::cout << "\n=== Testing wrong polymorphism ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Will output WrongAnimal sound, not WrongCat sound!
    wrongMeta->makeSound();
    
    // Clean up memory
    delete wrongMeta;
    delete wrongCat;
    
    std::cout << "\n=== Testing canonical form (copy constructor and assignment) ===" << std::endl;
    std::cout << "-- Creating original objects --" << std::endl;
    Dog originalDog;
    Cat originalCat;
    
    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    Dog copiedDog(originalDog);
    Cat copiedCat(originalCat);
    
    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    Dog assignedDog;
    Cat assignedCat;
    assignedDog = originalDog;
    assignedCat = originalCat;
    
    std::cout << "\n=== Testing sounds (should be the same) ===" << std::endl;
    std::cout << "Original: ";
    originalDog.makeSound();
    std::cout << "Copied: ";
    copiedDog.makeSound();
    std::cout << "Assigned: ";
    assignedDog.makeSound();
    
    return 0;
}