// Rotate a Linked List
// https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        int cnt = 0;
        Node* temp = head;
        while (temp) 
        {
            temp = temp -> next;
            cnt++;
        }
        temp = head;
        if (k%cnt== 0) return head;
        k--;
        while (k--)
        {
            temp = temp -> next;
        }
        Node* tmp = temp;
        while (tmp -> next)
        {
            tmp = tmp -> next;
        }
        Node* h =temp -> next;
        temp -> next = NULL;
        
        tmp -> next = head;
        return h;
        
    }
};
