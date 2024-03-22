#include <stdio.h>


void countVowels(char *sentence)
{
    int vowelCount[5] = {0}; 
    int i = 0;

    while (sentence[i] != '\0')
    {
        switch (sentence[i])
        {
            case 'a': case 'A':
                vowelCount[0]++;
                break;
            case 'e': case 'E':
                vowelCount[1]++;
                break;
            case 'i': case 'I':
                vowelCount[2]++;
                break;
            case 'o': case 'O':
                vowelCount[3]++;
                break;
            case 'u': case 'U':
                vowelCount[4]++;
                break;
        }
        i++;
    }

    
    printf("Occurrences of each vowel:\n");
    printf("A: %d\n", vowelCount[0]);
    printf("E: %d\n", vowelCount[1]);
    printf("I: %d\n", vowelCount[2]);
    printf("O: %d\n", vowelCount[3]);
    printf("U: %d\n", vowelCount[4]);
}

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    countVowels(sentence);

    return 0;
}