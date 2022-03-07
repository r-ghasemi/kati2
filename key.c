#include <stdio.h>

int main() {
  unsigned char c;
  while ((c=getc(stdin))!=EOF) {
	printf("%d %c\n",c,c);
  }
  return 0;
}
