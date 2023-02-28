#include "client.h"
#include "utils.h"

void list_banks()
{
    char *banks[3] = {"LCL", "BNP", "CA"};
    for (int i = 0; i < 3; i++)
        printf("%d. %s\n", i+1, banks[i]);
}

char *generate_buffer(void *data, const char *data_structure)
{
    int n_fields = strlen(data_structure);
    int *field_sizes = malloc (n_fields); // stores size of every field in bytes
    char *fields = malloc (n_fields); // This will store each individual field

    int buf_size = 0;


    for (int i = 0; i < n_fields; i++) {
        switch(data_structure[i]) {
            case 'i': // int
            {
                field_sizes[i] = sizeof(int);
            } break;
            case 'f': // float
            {
                field_sizes[i] = sizeof(float);
            } break;
            case 'c': // char
            {
                field_sizes[i] = sizeof(char);
            } break;
            case 'C': // char *
            {
                field_sizes[i] = sizeof(char*);
            } break;
        }
    }

    for (int i = 0; i < n_fields; i++)
        buf_size += field_sizes[i];
    buf_size += n_fields;   // This adds the separators between each field (n_fields - 1) and adds 
                            // the \0.
    void *buffer = malloc(buf_size);

    for (int i = 0; i < n_fields; i++) {
        for (int j = i*field_sizes[i]; j < field_sizes[i]; j++)
            fields[i] = ((char*)data)[i];
        fields[]
    }
}
