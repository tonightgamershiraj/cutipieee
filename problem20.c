#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    struct Node* ptr = head;
    free(head);
    printf("%d\n", ptr->data); 
    return 0;
}
