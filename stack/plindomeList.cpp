// Approach -just copy list in vector and check the palindome nature
//  just create a new list and use a stack to copy all elements in stack and then from stack to newlist and compare old and new list for checking palindrome

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
    bool isPalindrome(ListNode *head)
    {
        vector<int> vec;
        ListNode *temp = head;
        while (temp != NULL)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        int lasteindex = vec.size() - 1;
        for (int i = 0; i <= lasteindex / 2; i++)
        {
            if (vec[i] != vec[lasteindex - i])
            {
                return false;
            }
        }
        return true;
    }
};
