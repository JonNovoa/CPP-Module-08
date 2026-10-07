/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:56:12 by jnovoa-a          #+#    #+#             */
/*   Updated: 2026/10/07 18:37:15 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		//iterator dentro del stack
		typedef typename std::stack<T>::container_type::iterator iterator;
		//devuelve el primer elemento
		iterator begin()
		{
			return this->c.begin();
		}
		//devuelve el ultimo elemento
		iterator end()
		{
			return this->c.end();
		}
		
};

#endif