#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[1000];
    scanf("%s",string);
    int i, j, length = strlen(string);  
    int freq[length];  
      
      
    for(i = 0; i < strlen(string); i++) {  
        freq[i] = 1;  
        for(j = i+1; j < strlen(string); j++) {  
            if(string[i] == string[j]) {  
                freq[i]++;  
                string[j] = '0';  
            }  
        }  
    }   
    for(i = 0; i < length; i++) {  
        if(string[i] != ' ' && string[i] != '0')  
            printf("%c%d ", string[i], freq[i]);  
    }  
          
    return 0;  
}