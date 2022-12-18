#include "main.h"

/**
 *  _isupper - check if numbers are 0 - 9
 *  @c: char to check
 *  return: 0 or 1
 */

int _isupper(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
