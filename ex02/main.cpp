/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:05:04 by rmakoni           #+#    #+#             */
/*   Updated: 2025/07/18 10:28:59 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void testAbstractClass() {
    std::cout << "=== Testing Abstract Class ===" << std::endl;
    
    // This line would cause compilation error:
    // Animal animal; // Error: cannot instantiate abstract class
    
    std::cout << "✓ Animal class is abstract and cannot be instantiated directly" << std::endl;
    
    // But we can still use pointers to Animal for polymorphism
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    
    delete j;
    delete i;
}

void testDeepCopy() {
    std::cout << "\n=== Testing Deep Copy ===" << std::endl;
    
    Dog original;
    std::cout << "\nCreating copy..." << std::endl;
    Dog copy = original;
    
    std::cout << "\nTesting assignment..." << std::endl;
    Dog assigned;
    assigned = original;
    
    std::cout << "\nOriginal type: " << original.getType() << std::endl;
    std::cout << "Copy type: " << copy.getType() << std::endl;
    std::cout << "Assigned type: " << assigned.getType() << std::endl;
    
    std::cout << "\nDestroying test objects..." << std::endl;
}

void testAnimalArray() {
    std::cout << "\n=== Testing Animal Array ===" << std::endl;
    
    const int size = 6;
    Animal* animals[size];
    
    // Create half Dogs, half Cats
    for (int i = 0; i < size; i++) {
        if (i < size / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
    
    std::cout << "\nMaking sounds..." << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }
    
    std::cout << "\nDeleting all animals..." << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
}

int main() {
    testAbstractClass();
    testDeepCopy();
    testAnimalArray();
    
    std::cout << "\n=== Program finished ===" << std::endl;
    return 0;
}