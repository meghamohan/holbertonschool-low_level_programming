#include "holberton.h"
/**
  * is_prime_number - returns a prime number
  * @n: takes in an integer
  * Return: returns 1 if true
  */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
//if number can be divided by 2 then it is not prime
	if (n % 2 == 0)
            return (0);

/* if number can be divided by any other number then it is not prime,
it is incremented by 2 since we checked for even numbers already */
	return (check_prime(n, 3));
}
/**
  * check_prime - returns a prime number
  * @x: takes in an integer
  * @y: takes an integer
  * Return: return 1 if true
  */
int check_prime(int x, int y)
{
	if(x == y)
		return (1);
	if(x % y == 0)
		return(0);
	else
		return check_prime(x, y + 2);
	
}

