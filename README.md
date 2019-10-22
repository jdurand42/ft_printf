# ft_printf
printf
recoding of printf

step:

etablir une liste va_
lire la string et l'imprimer au ft_putchar
si %
  envoyer l'argument dans une fonction aiguillage qui va envoyer la valeur dans sa fonction correspondante
 proteger?
 gerer les flags avec une fonction similaire
 compter le nombre de cara imprime et le renvoyer

 ft:
 putnbr
 putnbrbase
 putstr
 putchar
 putnbrlong?

 types:
 d, i  = int // sensible a la casse?
 o, u, x, X = unsigned int converti en octal
 e, E: reel, double
 f, F = reel double arrondi


 3: profit


OPTI:

recuperer directement le type

%[parameter][flags][width][.precision][length]type


n$	n is the number of the parameter to display using this format specifier, allowing the parameters provided to be output multiple times, using varying format specifiers or in different orders. If any single placeholder specifies a parameter, all the rest of the placeholders MUST also specify a parameter.
For example, printf("%2$d %2$#x; %1$d %1$#x",16,17) produces 17 0x11; 16 0x10.

Character	Description
%	Prints a literal % character (this type doesn't accept any flags, width, precision, length fields).
d, i	int as a signed integer. %d and %i are synonymous for output, but are different when used with scanf() for input (where using %i will interpret a number as hexadecimal if it's preceded by 0x, and octal if it's preceded by 0.)
u	Print decimal unsigned int.
f, F	double in normal (fixed-point) notation. f and F only differs in how the strings for an infinite number or NaN are printed (inf, infinity and nan for f; INF, INFINITY and NAN for F).
e, E	double value in standard form ([-]d.ddd e[+/-]ddd). An E conversion uses the letter E (rather than e) to introduce the exponent. The exponent always contains at least two digits; if the value is zero, the exponent is 00. In Windows, the exponent contains three digits by default, e.g. 1.5e002, but this can be altered by Microsoft-specific set_output_format function.
g, G	double in either normal or exponential notation, whichever is more appropriate for its magnitude. g uses lower-case letters, G uses upper-case letters. This type differs slightly from fixed-point notation in that insignificant zeroes to the right of the decimal point are not included. Also, the decimal point is not included on whole numbers.
x, X	unsigned int as a hexadecimal number. x uses lower-case letters and X uses upper-case.
o	unsigned int in octal.
s	null-terminated string.
c	char (character).
p	void * (pointer to void) in an implementation-defined format.
a, A	double in hexadecimal notation, starting with 0x or 0X. a uses lower-case letters, A uses upper-case letters.[4][5] (C++11 iostreams have a hexfloat that works the same).
n	Print nothing, but writes the number of characters successfully written so far into an integer pointer parameter.
Java: indicates a platform neutral newline/carriage return.[6]
Note: This can be utilized in Uncontrolled format string exploits.

Width field
The Width field specifies a minimum number of characters to output, and is typically used to pad fixed-width fields in tabulated output, where the fields would otherwise be smaller, although it does not cause truncation of oversized fields.

The width field may be omitted, or a numeric integer value, or a dynamic value when passed as another argument when indicated by an asterisk *. For example, printf("%*d", 5, 10) will result in    10 being printed, with a total width of 5 characters.

Though not part of the width field, a leading zero is interpreted as the zero-padding flag mentioned above, and a negative value is treated as the positive value in conjunction with the left-alignment - flag also mentioned above.

Precision field
The Precision field usually specifies a maximum limit on the output, depending on the particular formatting type. For floating point numeric types, it specifies the number of digits to the right of the decimal point that the output should be rounded. For the string type, it limits the number of characters that should be output, after which the string is truncated.

The precision field may be omitted, or a numeric integer value, or a dynamic value when passed as another argument when indicated by an asterisk *. For example, printf("%.*s", 3, "abcdef") will result in abc being printed.

flags

Character	Description
-
(minus)	Left-align the output of this placeholder. (The default is to right-align the output.)
+
(plus)	Prepends a plus for positive signed-numeric types. positive = +, negative = -.
(The default doesn't prepend anything in front of positive numbers.)

(space)	Prepends a space for positive signed-numeric types. positive =  , negative = -. This flag is ignored if the + flag exists.
(The default doesn't prepend anything in front of positive numbers.)
0
(zero)	When the 'width' option is specified, prepends zeros for numeric types. (The default prepends spaces.)
For example, printf("%2X",3) produces  3, while printf("%04X",3) produces in 0003.
#
(hash)	Alternate form:
For g and G types, trailing zeros are not removed.
For f, F, e, E, g, G types, the output always contains a decimal point.
For o, x, X types, the text 0, 0x, 0X, respectively, is prepended to non-zero numbers.

length

hh	For integer types, causes printf to expect an int-sized integer argument which was promoted from a char.
h	For integer types, causes printf to expect an int-sized integer argument which was promoted from a short.
l	For integer types, causes printf to expect a long-sized integer argument.
For floating point types, this has no effect.[3]

ll	For integer types, causes printf to expect a long long-sized integer argument.
L	For floating point types, causes printf to expect a long double argument.
z	For integer types, causes printf to expect a size_t-sized integer argument.
j	For integer types, causes printf to expect a intmax_t-sized integer argument.
t	For integer types, causes printf to expect a ptrdiff_t-sized integer argument.
