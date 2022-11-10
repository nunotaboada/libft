/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <nmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:53:52 by nmoreira          #+#    #+#             */
/*   Updated: 2022/10/01 14:53:52 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	DESCRIPTION
 *	Applies the function f to each character of the string passed as argument,
 *	and passing its index as first argument. Each character is passed by
 *	address to f to be modified if necessary.
 *	PARAMETERS
 *	#1. The string on which to iterate.
 *	#2. The function to apply to each character.
 *	RETURN VALUES
 *	-
 */

#include "libft.h"

void ft_striteri(char *str, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (str != 0 && f != 0)
    {
        i = 0;
        while (str[i])
        {
            f(i, str + i); // também (*f)(i, str + i)
            i++;
        }
    }
}

// Declaration

// A prototype for a function which takes a function parameter looks like the following:

// void func ( void (*f)(int) );

// This states that the parameter f will be a pointer to a function which has a void return type and which takes a single int parameter. The following function (print) is an example of a function which could be passed to func as a parameter because it is the proper type:

// void print ( int x ) {
//   printf("%d\n", x);
// }

// Function Call

// When calling a function with a function parameter, the value passed must be a pointer to a function. Use the function's name (without parentheses) for this:

// func(print);

// would call func, passing the print function to it.

// Function Body

// As with any parameter, func can now use the parameter's name in the function body to access the value of the parameter. Let's say that func will apply the function it is passed to the numbers 0-4. Consider, first, what the loop would look like to call print directly:

// for ( int ctr = 0 ; ctr < 5 ; ctr++ ) {
//   print(ctr);
// }

// Since func's parameter declaration says that f is the name for a pointer to the desired function, we recall first that if f is a pointer then *f is the thing that f points to (i.e. the function print in this case). As a result, just replace every occurrence of print in the loop above with *f:

// void func ( void (*f)(int) ) {
//   for ( int ctr = 0 ; ctr < 5 ; ctr++ ) {
//     (*f)(ctr);
//   }
// }

// também podemos ler
// void foo(void (*fPtr)())
// {
//     fPtr();
//     /*
//       if you want you can use
//       it like below expression.

//       (*fPtr)();

//     */
// }
// Since fPtr is a pointer to the function and holds the address of the desired function. So using fPtr we can call the function.
