/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:05:02 by rmakoni           #+#    #+#             */
/*   Updated: 2025/07/18 10:27:42 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);

    public:
        virtual ~Animal();
        virtual std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif
