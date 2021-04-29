/**
 * Definition for singly-linked list.
 * */
#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *lastPtr = NULL;
        ListNode *nowPtr = head;
        while (nowPtr) // nowPtr != NULL
        {
            ListNode *last_lastPtr = lastPtr;
            lastPtr = nowPtr;
            nowPtr = nowPtr->next;
            lastPtr->next = last_lastPtr;
        }
        head = lastPtr;
        return head;
    }
};