#include <stdio.h>

#define ITEM_COUNT 3

int main(void) {
    const char *items[ITEM_COUNT] = {"celular", "carteira", "pedra"};
    int accessIndex;
    scanf("%d", &accessIndex);
    // gororoba computacional
    int actualIndex = (accessIndex >= 0) * (accessIndex % ITEM_COUNT) + (accessIndex < 0) * (ITEM_COUNT + accessIndex % ITEM_COUNT - (accessIndex % ITEM_COUNT == 0 && 1) * ITEM_COUNT);
    printf("%s", items[actualIndex]);
}
