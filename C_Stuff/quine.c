char s[] = {
	'\t',
	'0',
	'\n',
	'}',
	';',
	'\n',
	'\n',
	'#',
	'i',
	'n',
	'c',
	'l',
	'u',
	'd',
	'e',
	' ',
	'<',
	's',
	't',
	'd',
	'i',
	'o',
	'.',
	'h',
	'>',
	'\r',
	'\n',
	'i',
	'n',
	't',
	' ',
	'm',
	'a',
	'i',
	'n',
	'(',
	')',
	' ',
	'{',
	'\r',
	'\n',
	'\t',
	'i',
	'n',
	't',
	' ',
	'i',
	';',
	'\r',
	'\n',
	'\t',
	'p',
	'r',
	'i',
	'n',
	't',
	'f',
	'(',
	'"',
	'c',
	'h',
	'a',
	'r',
	' ',
	's',
	'[',
	']',
	' ',
	'=',
	' ',
	'{',
	'\\',
	'n',
	'"',
	')',
	';',
	'\r',
	'\n',
	'\t',
	'f',
	'o',
	'r',
	' ',
	'(',
	'i',
	' ',
	'=',
	' ',
	'0',
	';',
	' ',
	's',
	'[',
	'i',
	']',
	';',
	' ',
	'i',
	'+',
	'+',
	')',
	' ',
	'p',
	'r',
	'i',
	'n',
	't',
	'f',
	'(',
	'"',
	'\\',
	't',
	'%',
	'd',
	',',
	'\\',
	'n',
	'"',
	',',
	' ',
	's',
	'[',
	'i',
	']',
	')',
	';',
	'\r',
	'\n',
	'\t',
	'p',
	'r',
	'i',
	'n',
	't',
	'f',
	'(',
	'"',
	'%',
	's',
	'"',
	',',
	' ',
	's',
	')',
	';',
	'\r',
	'\n',
	'\t',
	'r',
	'e',
	't',
	'u',
	'r',
	'n',
	' ',
	'0',
	';',
	'\r',
	'\n',
	'}',
	0
};

#include <stdio.h>
int main() {
	int i;
	printf("char s[] = {\n");
	for (i = 0; s[i]; i++) printf("\t%d,\n", s[i]);
	printf("%s", s);
	return 0;
}