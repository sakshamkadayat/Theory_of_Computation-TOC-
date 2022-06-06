//C program for DFA that accepts set of all strings that start and end with same symbol over given alphabet a and b
#include<stdio.h>
#include<string.h>
#define max 50
int main(){
   char string[max],state = 'A';
   int i;
   printf("Enter a string : ");
   scanf(" %s",string);
   for(i=0;string[i]!='\0';i++){
    switch(state){
  case 'A':
    if(string[i] == 'a'){
        state = 'B';
    }else if(string[i] == 'b'){
       state = 'D';
    }
    break;
     case 'B':
    if(string[i] == 'a'){
        state = 'B';
    }else if(string[i] == 'b'){
       state = 'C';
    }
    break;
  case 'C':
    if(string[i] == 'a'){
        state = 'B';
    }else if(string[i] == 'b'){
       state = 'C';
    }
    break;
      case 'D':
    if(string[i] == 'a'){
        state = 'E';
    }else if(string[i] == 'b'){
       state = 'D';
    }
    break;
      case 'E':
    if(string[i] == 'a'){
        state = 'E';
    }else if(string[i] == 'b'){
       state = 'D';
    }
    break;
    }
   }
   if( state == 'B' || state == 'D'){
    printf("Input string accepted as reached to final state %c",state);
   }else{
      printf("Input string rejected");
   }

   return 0;
}
