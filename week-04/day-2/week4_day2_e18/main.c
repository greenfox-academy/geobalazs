#include <stdio.h>

int first_word(char *string, char *first);

int main()
{
    //TODO: write a function, which extracts the first word of a given string.
    //return with the word's length

    char str[] = "Extracting the first word.";
    char first[50];
    int i = 0;

    for( i=0 ; str[i] != '\0' ; i++ ){
        if (str[i] == ' '){
        first[i] = '\0';
        }
    }

    for( i=0 ; str[i] != '\0' ; i++ ){
        first[i] = str[i];
    }
    printf("%s" , first);


    return 0;
}
