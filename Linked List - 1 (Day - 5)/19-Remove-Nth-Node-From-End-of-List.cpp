// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *start = new ListNode();
        start->next = head;

        ListNode *one = start, *two = start;

        for (int i = 0; i < n; i++)
        {
            one = one->next;
        }

        while (one->next != NULL)
        {
            one = one->next;
            two = two->next;
        }

        two->next = two->next->next;
        return start->next;
    }
};