#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size) {
int i, j;
char c;
for (i = 0; i < size; i += 10) {
printf("%08x: ", i);
for (j = i; j < i + 10; j++) {
if (j < size) {
printf("%02x ", (unsigned char)b[j]);
} 
else 
{
printf("   ");
}
}
for (j = i; j < i + 10; j++) {
if (j < size) {
c = b[j];
if (!isprint(c)) 
{
c = '.';
}
printf("%c", c);
}
else 
{
printf(" ");
}
}
printf("\n");
}
if (size <= 0) {
printf("\n");
}
}

