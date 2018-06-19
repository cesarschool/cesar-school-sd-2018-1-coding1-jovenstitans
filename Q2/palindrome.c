#include <stdio.h>
#include <stdbool.h>

/**
* Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
*
* Função: bool isPalindrome (char[] sentence, int length)
* Input:
* - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
* - length: tamanho do array - número de caracteres
* Output: true se a sentença é um palídromo, falso caso negativo.
*/

bool isPalindrome (char sentence[], int length) {
   printf("\nisPalindrome::START: %s, %d\n", sentence, length);

   // TODO: YOUR CODE HERE!
   for(int i = 0; i < length; i++){
       if (sentence[i] != sentence[length - 1 - i]){
           printf("false");
           printf("\nisPalindrome::END\n");
           return false;
       }// end if
   }// end for loop
   printf("true");
   printf("\nisPalindrome::END\n");
   return true;
}// end isPalindrome

int main()
{
   printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
   
   // true cases
   isPalindrome("oso", 3);
   isPalindrome("ralar", 5);

   // false cases
   isPalindrome("cesar", 5);
   isPalindrome("school", 6);

   return 0;
}
