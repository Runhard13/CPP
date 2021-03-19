/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrennan <cdrennan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:59:22 by cdrennan          #+#    #+#             */
/*   Updated: 2021/03/18 19:41:54 by cdrennan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <iomanip>
#include "Contact.h"

void print_invite();
void show_all(Contact *book, int &index);
void show_one (Contact *book, int i);
int  contact_search(Contact *book, int &index);


#endif //MAIN_H
