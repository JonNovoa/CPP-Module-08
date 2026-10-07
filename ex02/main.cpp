/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:17:06 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/07 19:55:51 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	//Mostramos el ultmo elemento
	std::cout << "Top: " << mstack.top() << std::endl;
	//Eliminamos el ultimo elemento
	mstack.pop();
	//Mostramos el numero de elementos
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	//Obtenemos el principio y el final
	std::cout << "MutantStack:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	//Mostramos los elementos
	while(it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
	//Comprobamos que lo podemos copiar a un stack normal
    std::stack<int> s(mstack);
	
	std::list<int> numbers;
    numbers.push_back(5);
    numbers.push_back(17);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(737);
    numbers.push_back(0);

    std::cout << "List:" << std::endl;

    for (std::list<int>::iterator lit = numbers.begin();
         lit != numbers.end(); ++lit)
    {
        std::cout << *lit << std::endl;
    }

    return 0;




	
}