#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) {
  char c;
  int nDigit=0, nWhite=0, nOther=0;
  while ((c=getchar()) !=EOF) {
    if(c=' '){
      nWhite++;
    }
    else if (isdigit(c)){
      nDigit++;
    }
  }
  printf("nWhite = %d \n",nWhite);
  printf("nDigit = %d \n",nDigit);
return 0;
}
