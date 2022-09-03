#include <bits/stdc++.h>

using namespace std;

class MyLinkedList {
public:
    int val;
    MyLinkedList *next;
    MyLinkedList *head;
    
    MyLinkedList() {
        head = NULL;
    }
    
    MyLinkedList(int val){
        this->val = val;
        this->next = NULL;
    }
    
    int get(int index) {
        MyLinkedList *tmp = head;
        
        for(int i = 1; i <= index; i++)
        {
            tmp = tmp->next;
            if(tmp == NULL) break;
        }
        if(tmp == NULL) return -1;
        else return tmp->val;
    }
    
    void addAtHead(int val) {
        MyLinkedList *nw = new MyLinkedList(val);
        nw->next = head;
        head = nw;
    }
    
    void addAtTail(int val) {
        MyLinkedList *nw = new MyLinkedList(val);
        if(head == NULL)
        {
            head = nw;
            return;
        }
        
        MyLinkedList *tmp = head;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = nw;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0)
        {
            addAtHead(val);
            return;
        }
        MyLinkedList *tmp = head;
        
        for(int i = 1; i <= index-1; i++)
        {
            tmp = tmp->next;
            if(tmp == NULL) break;
        }
        if(tmp == NULL) return;
        
        MyLinkedList *nw = new MyLinkedList(val);
        nw->next = tmp->next;
        tmp->next = nw;
    }
    
    void deleteAtIndex(int index) {
        if(index == 0)
        {
            MyLinkedList *del = head;
            head = head->next;
            delete del;
            return;
        }
        MyLinkedList *tmp = head;
        for(int i = 1; i <= index-1; i++)
        {
            tmp = tmp->next;
            if(tmp == NULL) break;
        }
        if(tmp == NULL || tmp->next == NULL) return;
        MyLinkedList *del = tmp->next;
        tmp->next = tmp->next->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main(void)
{

}