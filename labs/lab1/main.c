#include "header.h"


int main(void) {

    int size = 1;
    size = get_size(size);
    Film* films = memory(size);


    create_mas_struct(films, size);
    show_mas_struct(films, size);
    free_memory(films, size);



    return 0;
}
