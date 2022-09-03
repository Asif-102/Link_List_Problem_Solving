#include <bits/stdc++.h>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
        {
            return head;
        }
        
        ListNode *tmp = head;
        while(tmp->next != NULL)
        {
            if(tmp->val == tmp->next->val)
            {
                ListNode *del = tmp->next;
                tmp->next = del->next;
                delete del;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};

int main(void)
{
    
}