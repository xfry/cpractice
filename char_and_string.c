#include <stdio.h>
/** compiles the program, then run it ./aut | cat -e
 * you will see the result is ^@$ that means '\0' and '\n'
 * that means an string always has at leas one character constant.
 *
 * a character constant is represented with 'a' simple quotes
 * and the constant value.
 */
int main(void)
{
	char *s = "";
	char s2 = '';
	printf("%c\n", *s);
	printf("%c\n", s2); /** */
	return (0);
}
