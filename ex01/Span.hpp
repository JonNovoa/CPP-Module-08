/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:27:16 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/05 19:13:12 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>

class Span
{
    private:
        std::vector<int> _numbers;
        unsigned int _maxSize;
    
    public:
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);
        
        template <typename Iterator>
        void addRange(Iterator begin, Iterator end)
        {
            while(begin != end)
            {
                addNumber(*begin);
                ++begin;
            }
        }

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        class SpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};



#endif