#include <stdio.h>


void capitalizeSentence(char *sentence)
{
    int i = 0;
    
    while (sentence[i] != '\0')
    {
        
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            sentence[i] = sentence[i] - 32; 
        }
        i++;
    }
}

int main()
{
    FILE *inputFile, *outputFile;
    char sentence[1000];

    
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    
    fgets(sentence, sizeof(sentence), inputFile);

    
    fclose(inputFile);

   
    capitalizeSentence(sentence);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error opening output file.\n");
        return 1;
    }

    
    fprintf(outputFile, "%s", sentence);

    
    fclose(outputFile);

    printf("Sentence successfully capitalized and written to output.txt.\n");

    return 0;
}
