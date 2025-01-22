#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    printf("Text:");
    char text[2000];
    fgets(text, sizeof(text), stdin);

    int letter_count = 0;
    int word_count = 0;
    int sen_count =0;

    for (int i = 0, len = strlen(text); i <= len; i++)
    {
        if ( ( text[i] >= 'a' && text[i] <= 'z' ) || ( text[i] >= 'A' && text[i] <= 'Z'  ) )
        {
            letter_count++;
        }

        if ( text[i] == ' ' || text[i] == '\0'  )
        {
            word_count++;
        }

        if ( text[i] == '.' || text[i] == '?' || text[i] == '!' )
        {
            sen_count++;
        }
    }

    double L = (letter_count/(double)word_count)*100;
    double S = (sen_count/(double)word_count)*100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    printf("index is %d\n", index);

    // if ( index )
    
    // {
    //     /* code */
    // }
    
    
}   