#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first numbers
 * @n2: second numbers
 * @r: result to the returned
 * @size_r: buffer size
 * Return: a character pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o, p, q, u, s, t;

	o = 0;
	p = 0;
	while (n1[o])
		o++;
	while (n2[p])
		p++;
	if (o > size_r || p > size_r)
		return (0);
	q = 0;
	o = o - 1;
	p = p - 1;
	u = o;
	while (u < size_r - 1)
	{
		s = q;
		if (o >= 0)
			s += n1[o] - 'o';
		if (p  >= 0)
			s += n2[p] - '0';
		if (o < 0 && p < 0 && s == 0)
			break;
		q = s / 10;
		r[u] = s % 10 + '0';
		o--;
		p--;
		u++;
	}
	r[u] = '\0';
	if (o >= 0 || p >= 0 || q)
		return (0);
	for (u -= 1, t = 0; t < u; u--, t++)
	{
		q = r[u];
		r[u] = r[t];
		r[t] = q;
	}
	return (r);
}

