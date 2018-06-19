#include <stdio.h>
/**
* Escreva uma função que encontra a primeira letra que não se repete em uma
* sentença.
* Função: char firstNonRepeatingChar(char[] sentence, int length)
* Input:
* - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
* - length: tamanho do array - número de caracteres
* Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
*/
char firstNonRepeatingChar (char sentence[], int length)
{
   printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
   
   int isRepeated; //variable to check if the letter is diferent to all other letters in the same sentence
   
   for(int i = 0; i < length ; i++){ //looping for each letter in sentence
       
       isRepeated = 0; //initializing as 0 (false)
       
       //comparing current letter in position i with the letters in position j except for the one in the position i = j
       for(int j = 0; j < length ; j++){
           if (i != j){
               if(sentence[i] == sentence[j]){
                   isRepeated = 1; // if found another letter in the sentence that is equal to it
               } //end if
           } //end if
       }// end for
     
       if (isRepeated==0) { //if no other letter is equal to it, isRepeated = 0
           printf("%c", sentence[i]); //printing letter
           printf("\nfirstNonRepeatingChar::END\n");
           return sentence[i]; //returning the letter
       }// end if
       
   }// end for
   
   printf("\nfirstNonRepeatingChar::END\n");
   printf("-1");
   return -1;
   
}// end firstNonRepeatingChar

int main()
{
   printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
   
   firstNonRepeatingChar("ovo", 3);
   firstNonRepeatingChar("cesar school", 12);
   firstNonRepeatingChar("sistemas digitais", 17);
   return 0;
}
