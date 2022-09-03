#include <bits/stdc++.h>

using namespace std;

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

class Solution {
public:
    int listSize(ListNode *head)
    {
        int count = 0;
        while(head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = listSize(head);
        
        int mid = sz/2;
        
        for(int i = 1; i <= mid; i++)
        {
            head = head->next;
        }
        return head;
    }
};

int main(void)
{
    
}