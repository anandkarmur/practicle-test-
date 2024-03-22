#include <stdio.h>


struct Movie
{
    char title[100];
    char genre[50];
    char language[50];
};

int main()
{
    int n;
    printf("Enter the number of movies: ");
    scanf("%d", &n);

    
    struct Movie movies[n];

    
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Movie %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", movies[i].title);
        printf("Genre: ");
        scanf(" %[^\n]s", movies[i].genre);
        printf("Language: ");
        scanf(" %[^\n]s", movies[i].language);
    }

    
    printf("\nDetails of %d movies:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}