/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:32:48 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/06 12:28:31 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    Span sp(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    //Con span lleno
    try
    {
        sp.addNumber(42);
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    //Con menos de 2 numeros
    Span one(5);
    one.addNumber(10);

    try
    {
        std::cout << one.shortestSpan()  << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: " << e.what()  << std::endl;
    }

    //Creamos 10000 numeros
    std::vector<int> numbers;
    for(int i = 0; i < 10000; i++)
        numbers.push_back(i);
    //Creamos un span para los 1000 numeros
    Span big(10000);
    //Añadimos todos los numeros
    big.addRange(numbers.begin(), numbers.end());
    
    std::cout << "10000 numbers:" << std::endl;
    std::cout << "Shortest span: " << big.shortestSpan() << std::endl;
    std::cout << "Longest span: " << big.longestSpan() << std::endl;

    return 0;
    
}