/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:37:17 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/02 19:53:30 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	//Creamos un vector de enteros
	std::vector<int> numbers;

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(20);
	numbers.push_back(40);

	try
    {
        std::vector<int>::const_iterator it = easyfind(numbers, 20);

        std::cout << "Encontrado: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	try
    {
        std::vector<int>::const_iterator it = easyfind(numbers, 50);

        std::cout << "Encontrado: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}