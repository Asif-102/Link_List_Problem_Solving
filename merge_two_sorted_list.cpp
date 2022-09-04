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
class Solution
{
public:
    ListNode *head = NULL;

    void insertAtTail(int val)
    {
        ListNode *nw = new ListNode(val);

        if (head == NULL)
        {
            head = nw;
            return;
        }

        ListNode *tmp = head;

        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }

        tmp->next = nw;
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *a = list1;
        ListNode *b = list2;

        while (a != NULL && b != NULL)
        {
            if (a->val <= b->val)
            {
                insertAtTail(a->val);
                a = a->next;
            }
            else
            {
                insertAtTail(b->val);
                b = b->next;
            }
        }

        while (a != NULL)
        {
            insertAtTail(a->val);
            a = a->next;
        }

        while (b != NULL)
        {
            insertAtTail(b->val);
            b = b->next;
        }

        return head;
    }
};

int main(void)
{
}