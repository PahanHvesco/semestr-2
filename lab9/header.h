#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum recommendation {

    YES,
    NO

} rec;
typedef struct Film {
    char* name;
    char* genre;
    float review;
} Film;

Film* memory(int size);
int get_size(int size);
void show_film(const Film* film);
void show_mas_struct(const Film* films, int size);
void free_memory(Film* film, int size);
void create_mas_struct(Film* films, int size);
