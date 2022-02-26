// https://leetcode.com/problems/merge-two-sorted-lists/submissions/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)   return list2;
        if(list2 == NULL)   return list1;

        ListNode* node = new ListNode();
        ListNode* head = node;

        while(list1 and list2){
            if(list1->val < list2->val){
                node->next = list1;
                list1 = list1->next;
            }
            else{
                node->next = list2;
                list2 = list2->next;
            }
            node = node->next;
        }
        if(list1)   node->next = list1;
        if(list2)   node->next = list2;
        return head->next;
    }
};
