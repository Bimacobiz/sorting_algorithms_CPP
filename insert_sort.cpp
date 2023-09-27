#include <iostream>

// Definition for a doubly-linked list node
struct ListNode {
    int val;
    ListNode* prev;
    ListNode* next;
    ListNode(int x) : val(x), prev(nullptr), next(nullptr) {}
};

// Function to swap two nodes in a doubly linked list
void swapNodes(ListNode*& head, ListNode** prev, ListNode*& current) {
    if (*prev != nullptr) {
        (*prev)->next = current->next;
        if (current->next != nullptr) {
            current->next->prev = *prev;
        }
        current->next = *prev;
        current->prev = (*prev)->prev;
        (*prev)->prev = current;
        if (current->prev == nullptr) {
            head = current;
        } else {
            current->prev->next = current;
        }
    }
}

// Function to perform insertion sort on a doubly linked list
void insertionSortList(ListNode*& head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    ListNode* present = head->next;
    while (present != nullptr) {
        ListNode* tmp = present->next;
        ListNode* insert = present->prev;

        while (insert != nullptr && present->val < insert->val) {
            swapNodes(head, &insert, present);
            insert = present->prev;
        }

        present = tmp;
    }
}

// Function to print the doubly linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(19);
    head->next = new ListNode(48);
    head->next->prev = head;
    head->next->next = new ListNode(99);
    head->next->next->prev = head->next;
    // Add more nodes as needed

    std::cout << "Original List: ";
    printList(head);

    insertionSortList(head);

    std::cout << "Sorted List: ";
    printList(head);

    return 0;
}
