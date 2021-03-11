#include <stdio.h>

int main(void) {
  char letters[26];
  for (int i=0; i < 26; i++) {
      letters[i] = (char)((int)'a'+i);
  }
  for (int i=0; i < 26; i++) {
      printf("%c\n", letters[i]);
  }
  return 0;
}

