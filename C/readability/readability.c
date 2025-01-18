#include <stdio.h>
#include <string.h>


int main(void){
    printf("Text:");
    char text[2000];
    fgets(text, sizeof(text), stdin);
    printf("%s", text);
    printf("total number of letters are: %ld\n", strlen(text));

    int letter_count =0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if ( ( text[i] >= 'a' && text[i] <= 'z' ) || ( text[i] >= 'A' && text[i] <= 'Z'  ) )
        {
            letter_count++;
        }
    }

    printf("actual total number of letters are %d\n", letter_count);
    
}   