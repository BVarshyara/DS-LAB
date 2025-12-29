/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2) {
    struct ListNode *prevA = list1;
    struct ListNode *afterB = NULL;
    struct ListNode *curr = list1;
    for (int i = 0; i < a - 1; i++) {
        curr = curr->next;
    }
    prevA = curr;
    for (int i = a - 1; i <= b; i++) {
        curr = curr->next;
    }
    afterB = curr;
    prevA->next = list2;
    struct ListNode *tail2 = list2;
    while (tail2->next != NULL) {
        tail2 = tail2->next;
    }
    tail2->next = afterB;
    return list1;
}
