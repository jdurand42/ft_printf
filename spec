//cspdiuxX%
c = char
s = string
p = *void inf defined format
d = int
i = int
u = unsigned int
x = unsigned int hexadecimal
X = Upper case letter
*/

flags:
'-0.*'
- = left align the input
0 = prepends 0 like -O - adds 0s instead of space: %02X or %2X
. = precision or number of char print : %.3s = 3char of s
* = same as * but dynanmic printf("%.*s", 3, "abcdef") will result in abc being printed.

%.2d 253 25
%.*
printf("%.*d", 2, int)
