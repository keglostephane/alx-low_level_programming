/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: a pointer to a pointer to the string to set
 *
 * @to: a pointer to string to use as value
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
