//C program for DFA that accepts set of all strings that start with 01 over given alphabet 0 and 1
#include<stdio.h>
#define max 50
int main(){
   char string[max],state = 'A';
   int i;
   printf("Enter a string : ");
   scanf(" %s",string);
   for(i=0;string[i]!='\0';i++){
    switch(state){
  case 'A':
    if(string[i] == '0'){
        state = 'B';
    }else if(string[i] == '1'){
       state = 'D';
    }
    break;
     case 'B':
    if(string[i] == '0'){
        state = 'D';
    }else if(string[i] == '1'){
       state = 'C';
    }
    break;
     case 'C':
    if(string[i] == '0' || string[i] == '1'){
       state = 'C';
    }
    break;
     case 'D':
     if(string[i] == '0' || string[i] == '1'){
       state = 'D';
    }
    break;
    }
   }
   if( state == 'C'){
    printf("Input string accepted as reached to final state %c",state);
   }else{
      printf("Input string rejected as reached to non-final state %c",state);
   }

   return 0;
}
