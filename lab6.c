//C program for DFA that accepts L = { ab U aba }*
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
       state = 'E';
    }
    break;
     case 'B':
    if(string[i] == 'a'){
        state = 'E';
    }else if(string[i] == 'b'){
       state = 'C';
    }
    break;
      case 'C':
    if(string[i] == 'a'){
        state = 'D';
    }else if(string[i] == 'b'){
       state = 'E';
    }
    break;
     case 'D':
    if(string[i] == 'a'){
        state = 'B';
    }else if(string[i] == 'b'){
       state = 'C';
    }
    break;
    case 'E':
     if(string[i] == 'a' || string[i] == 'b'){
       state = 'E';
    }
    break;
    }
   }
   if( state == 'D'){
    printf("Input string accepted as reached to final state %c",state);
   }else{
      printf("Input string rejected");
   }

   return 0;
}
