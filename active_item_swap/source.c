#include <stdio.h>

#define FORWARD 0
#define BACKWARD 1

const char *items[3] = {"celular", "carteira", "pedra"};
int activeItem = 0;
int swapDirection = FORWARD;
char option = '\0';

void swapActiveItem() {
    if (swapDirection == FORWARD) {
        activeItem++;
    } else {
        activeItem--;
    }
    if (activeItem == 2) {
        swapDirection = BACKWARD;
    } else if (activeItem == 0) {
        swapDirection = FORWARD;
    }
}

int main(void) {
    while (option != 's') {
        printf("\nJogador possui o item \"%s\" equipado", items[activeItem]);
        printf("\nInforme a ação desejada:\n\nb - apertar o botão\ns - sair\n\n");
        option = getchar();
        if (option == 'b') {
            swapActiveItem();
        }
        while (getchar() != '\n');
    }
    return 0;
}
