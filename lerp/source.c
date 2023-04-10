#include <stdio.h>

float lerp(float min, float max, float percentage) {
    return min + (max - min) * percentage / 100;
}

float inverseLerp(float min, float max, float between) {
    return (between - min) * 100 / (max - min);
}

int main(void) {
    int standardMode;
    scanf("%d", &standardMode);
    float min, max;
    if (standardMode) {
        float percentage;
        scanf("%f %f %f", &min, &max, &percentage);
        float result = lerp(min, max, percentage);
        printf("%.2f\n", result);
    } else {
        float between;
        scanf("%f %f %f", &min, &max, &between);
        float result = inverseLerp(min, max, between);
        printf("%.2f\n", result);
    }
}
