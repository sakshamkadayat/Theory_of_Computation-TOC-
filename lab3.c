//C program for DFA that accepts set of all strings that doesnot contain 101 as substring over given alphabet 0 and 1
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
    if(string[i] == '0'){
        state = 'A';
    }else if(string[i] == '1'){
       state = 'B';
    }
    break;
     case 'B':
    if(string[i] == '0'){
        state = 'C';
    }else if(string[i] == '1'){
       state = 'B';
    }
    break;
     case 'C':
    if(string[i] == '0'){
        state = 'A';
    }else if(string[i] == '1'){
       state = 'D';
    }
    break;
        case 'D':
     if(string[i] == '0' || string[i] == '1'){
       state = 'D';
    }
    break;
    }
   }
   if( state == 'C' || state == 'B' || state == 'A'){
    printf("Input string accepted as reached to final state %c",state);
   }else{
      printf("Input string rejected");
   }

   return 0;
}
