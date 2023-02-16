#include "header.h"




int get_size(int size) {
    printf("Enter number of films: ");
    while (scanf("%d", &size) != 1 || getchar() != '\n' || size < 1 )
    {
        printf("Error! Try again\n");
        rewind(stdin);
    }
    return size;
}
void show_film(const Film* film) {
    printf("Name: %s\n", film->name);
    printf("Genre: %s\n", film->genre);
    printf("Review: %.1f\n", film->review);
}
void show_mas_struct(const Film* films, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d Film \n", i+1);
        show_film(&films[i]);
        printf("\n");
    }
}
void free_memory(Film* film, int size) {
    for (int i = 0; i < size; ++i) {
        free(film[i].name);
        free(film[i].genre);
    }
    free(film);
}
void create_film(Film film) {
    char buffer[128];
    printf("Film name: ");
    scanf("%127s", &buffer);
    film.name = (char*)malloc(strlen(buffer)+1);
    strcpy(film.name, buffer);

    printf("Film genre: ");
    scanf("%127s", &buffer);
    film.genre = (char*)malloc(strlen(buffer)+1);
    strcpy(film.genre, buffer);

    printf("Film review: ");
    scanf("%f", &(film.review));
    printf("\n");
}
Film* memory(int size) {
    Film* films;
    films = malloc(size*sizeof(Film));
    return films;
}
void create_mas_struct(Film* films, int size) {
    char buffer[128];
    for (int i = 0; i < size; ++i) {

        printf("Film [%d] name: ", i+1);
        scanf("%127s", &buffer);
        films[i].name = (char*)malloc(strlen(buffer)+1);
        strcpy(films[i].name, buffer);

        printf("Film [%d] genre: ", i+1);
        scanf("%127s", &buffer);
        films[i].genre = (char*)malloc(strlen(buffer)+1);
        strcpy(films[i].genre, buffer);

        printf("Film [%d] review: ", i+1);
        scanf("%f", &((films+i)->review));
        printf("\n");
    }
}