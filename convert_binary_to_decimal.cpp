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
    int size(ListNode* head)
    {
        int count = 0;
        while(head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int sz = size(head);
        
        int sum = 0;
        
        for(int i = sz-1; i >= 0; i--)
        {
            int val = head->val;
        
            sum += (val * (pow(2, i)));
            
            head = head->next;
            
        }
        return sum;
    }
};

int main(void)
{
    
}