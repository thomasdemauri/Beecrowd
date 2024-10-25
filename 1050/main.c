    #include <stdio.h>
    #include <string.h>

    #define CIDADES 8

    char ddd[CIDADES][2][25] = {
        {"61", "Brasilia"},
        {"71", "Salvador"},
        {"11", "Sao Paulo"},
        {"21", "Rio de Janeiro"},
        {"32", "Juiz de Fora"},
        {"19", "Campinas"},
        {"27", "Vitoria"},
        {"31", "Belo Horizonte"}
    };

    char* busca_ddd(char *busca) {
        
        for (int i=0; i<CIDADES; i++) {
            if (strcmp(ddd[i][0], busca) == 0) {
                return ddd[i][1];
            }
        }
        return NULL;
    }

    int main () {

        char busca[25];
        scanf("%s", busca);

        if (busca[strlen(busca) - 1] == '\n') {
            busca[strlen(busca) - 1] = '\0';
        }

        char *cidade = busca_ddd(busca);

        if (!cidade == NULL) {
            printf("%s\n", cidade);
        } else {
            printf("DDD nao cadastrado\n");
        }

        return 0;
    }