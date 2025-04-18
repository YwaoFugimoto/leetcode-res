/**
 * Definition for singly-linked list->
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode result;
    result.next = NULL;
    struct ListNode* pointer = &result;
    while(list1 != NULL && list2 != NULL) {
        if(list1->val <= list2->val) {
            pointer->next = list1;
            list1 = list1->next;
        } else {
            pointer->next = list2;
            list2 = list2->next;
        }

        pointer = pointer->next;
    
    }

    if (list1 != NULL) {
        pointer->next = list1;
    } else {
        pointer->next = list2;
    }

    return result.next;   
}