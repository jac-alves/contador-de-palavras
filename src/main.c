/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c=1;
  int i=0, j=0, f=0, d=0, s=0;
  char frase[150];


  while (c != '\n') //le string e salva em vetor
  {
    scanf("%c", &c);
    frase[i]=c;
    i++;
  }
 
  for (d=0; d<=i; d++)
  {
    if (frase[d]==' ')
    {
      if (frase[d+1]>='A'||frase[d+1]>='0') //conta os espaços efetivos
        j++;
    }
    
    if (frase[d]==','||frase[d]=='-'||frase[d]=='.') //lida com a pontuação
    {
      if(frase[d+1]>='A')
        s++;
    }
  }
  f=s+j+1;
  printf("%d\n", f);
    return 0;
}



