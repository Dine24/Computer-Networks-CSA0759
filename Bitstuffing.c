#include <stdio.h>
void bitStuffing(char data[], int size) {
    int count = 0;
    printf("Original data: %s\n", data);
    for (int i = 0; i < size; i++) {
        if (data[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        printf("%c", data[i]);
        if (count == 5) {
            printf("0");
            count = 0;
        }
    }
    printf("\nStuffed data: ");
    for (int i = 0; i < size; i++) {
        printf("%c", data[i]);
        if (data[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        if (count == 5) {
            printf("0");
            count = 0;
        }
    }
    printf("\n");
}
int main() {
    char data[] = "110111011101111";
    int size = sizeof(data) - 1;
    bitStuffing(data, size);
    return 0;
}
