#include "main.h"
/**
 * _islower - Check if character is lowercase or not
 *
 * @c: integer represent ascii code of a character
 * Return: (int)
 * - 1: character is lowercase
 * - 0: character is not lowercase
 */
int _islower(int c)
{
 if (c >= 'a' && c <= 'z')
  return (1);
 return (0);
}
