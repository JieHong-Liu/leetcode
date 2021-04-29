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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (left == right)
        {
            return head;
        }
        else
        {
            int count_index = 1;
            ListNode *currentNode = head;
            ListNode *prevNode = NULL;
            // determine the previous node of the leftNode.
            while (count_index < left)
            {
                prevNode = currentNode;
                currentNode = currentNode->next;
                count_index++;
            }
            ListNode *leftNode = currentNode;
            ListNode *beforeLeft = prevNode;

            // after excute the while, the currentNode should be point to the right Node.
            while (count_index < right)
            {
                currentNode = currentNode->next;
                count_index++;
            }

            ListNode *rightNode = currentNode; // determine the right Node.

            if (left == 1)
            {
                head = rightNode;
            }

            ListNode *AfterRight = currentNode->next;

            // let current = leftNode
            prevNode = NULL;        // 0
            currentNode = leftNode; // 2
            ListNode *preceedNode = NULL;
            for (int i = left; i < right; i++)
            {
                preceedNode = currentNode->next;
                currentNode->next = prevNode;
                prevNode = currentNode;
                currentNode = preceedNode;
            }
            currentNode->next = prevNode; // 4->3

            if (beforeLeft != NULL)
            {
                beforeLeft->next = rightNode;
            }

            leftNode->next = AfterRight;
        }
        return head;
    }
};