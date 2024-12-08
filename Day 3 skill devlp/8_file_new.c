#include <stdio.h>
void print_notes(int amount, int note) {
    int notes = amount / note;
    printf("%d notes of Rs. %d\n", notes, note);
    amount = amount % note;
    if (note == 2000) {
        print_notes(amount, 500);
    } else if (note == 500) {
        print_notes(amount, 200);
    } else if (note == 200) {
        print_notes(amount, 100);
    } else if (note == 100) {
        print_notes(amount, 50);
    } else if (note == 50) {
        print_notes(amount, 20);
    } else if (note == 20) {
        print_notes(amount, 10);
    } else if (note == 10) {
        print_notes(amount, 5);
    } else if (note == 5) {
        print_notes(amount, 2);
    } else if (note == 2) {
        print_notes(amount, 1);
    } else {
        printf("%d notes of Rs. %d\n", amount, note);
    }
}

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    print_notes(amount, 2000);
    return 0;
}