#include "lists.h"
#include <unistd.h>
/**
 * premain - this function called before main.
 *
 */
void __attribute__((constructor)) premain()
{
	write(1,
		  "You're beat! and yet, you must allow,\nI bore my house upon my back!\n",
		  68);
}
