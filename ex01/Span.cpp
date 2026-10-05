/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:28:05 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/05 19:22:46 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int N) : _maxSize(N)
{
}

Span::Span(const Span &other)
    : _numbers(other._numbers), _maxSize(other._maxSize)
{
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _numbers = other._numbers;
        _maxSize = other._maxSize;
    }

    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if(_numbers.size() >= _maxSize)
        throw SpanException();
    _numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
    //Si hay menos de 2 numeros no hay span
    if(_numbers.size() < 2)
        throw SpanException();
    //Creamos copia para poder ordenar
    std::vector<int> sorted = _numbers;
    //Ordenamos los numeros
    std::sort(sorted.begin(), sorted.end());
    //Guardamos la primera distancia
    unsigned int shortest = sorted[1] - sorted[0];
    //Buscamos la distancia mas pequeña
    for(std::vector<int>::size_type i = 1; i < sorted.size(); i++)
    {
        unsigned int distance = sorted[i] - sorted[i - 1];
        
        if(distance < shortest)
            shortest = distance;
    }
    return shortest;
}

unsigned int Span::longestSpan() const
{
    if(_numbers.size() < 2)
        throw SpanException();
    //Ordenamos una copia
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    //Distancia es el mayor menos el menor
    return sorted.back() - sorted.front();
}

const char *Span::SpanException::what() const throw()
{
    return "Span error";
}