#include <stdio.h>
#define SPACE ' '
#define STOP '#'
#define LINE_BREAK '\n'

int main(void) {
  int spaceNum, lineBreakNum, lettersNum;
  // 为什么要先初始化为零值, 如果不进行这步操作, 最终的值是错误的.
  spaceNum = lineBreakNum = lettersNum = 0;
  char ch;

  while ((ch = getchar()) != STOP) {
      switch (ch) {
          case SPACE:
              spaceNum += 1;
              break;
          case LINE_BREAK:
              lineBreakNum += 1;
              break;
          default:
              lettersNum += 1;
      }
  }
  printf("space %d, line break %d, other letters %d\n", spaceNum, lineBreakNum, lettersNum);
  return 0;
}

