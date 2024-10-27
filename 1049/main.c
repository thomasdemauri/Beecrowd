#include <stdio.h>
#include <string.h>


void limpa_string(char str[20]) {
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    return;
}

int main() {

    char subfilo[20], classe[20], alimentacao[20];
    scanf("%s", subfilo);
    scanf("%s", classe);
    scanf("%s", alimentacao);
    
    limpa_string(subfilo);
    limpa_string(classe);
    limpa_string(alimentacao);

    if ( strcmp(subfilo, "vertebrado")==0 && strcmp(classe, "ave")==0 && strcmp(alimentacao, "carnivoro")==0 ) {
        printf("aguia\n");
    }

    if ( strcmp(subfilo, "vertebrado")==0 && strcmp(classe, "ave")==0 && strcmp(alimentacao, "onivoro")==0 ) {
        printf("pomba\n");
    }

    if ( strcmp(subfilo, "vertebrado")==0 && strcmp(classe, "mamifero")==0 && strcmp(alimentacao, "onivoro")==0 ) {
        printf("homem\n");
    }

    if ( strcmp(subfilo, "vertebrado")==0 && strcmp(classe, "mamifero")==0 && strcmp(alimentacao, "herbivoro")==0 ) {
        printf("vaca\n");
    }

    if ( strcmp(subfilo, "invertebrado")==0 && strcmp(classe, "inseto")==0 && strcmp(alimentacao, "hematofago")==0 ) {
        printf("pulga\n");
    }

    if ( strcmp(subfilo, "invertebrado")==0 && strcmp(classe, "inseto")==0 && strcmp(alimentacao, "herbivoro")==0 ) {
        printf("lagarta\n");
    }

    if ( strcmp(subfilo, "invertebrado")==0 && strcmp(classe, "anelideo")==0 && strcmp(alimentacao, "hematofago")==0 ) {
        printf("sanguessuga\n");
    }

    if ( strcmp(subfilo, "invertebrado")==0 && strcmp(classe, "anelideo")==0 && strcmp(alimentacao, "onivoro")==0 ) {
        printf("minhoca\n");
    }

    return 0;
}