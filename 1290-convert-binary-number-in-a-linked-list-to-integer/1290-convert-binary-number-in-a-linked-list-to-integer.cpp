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
    int binaryToDecimal(string s){
        int dec =0;
        int base =1;
        int n = (int)s.length();
        for(int i =n-1; i>=0; i--){
            if(s[i]=='1')
                dec+=base;
            base*=2;
        }
        return dec;
    }
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL){
            int data = head->val;
            char x = (data==1) ? '1' : '0';
            s= s+x;
            head = head->next;
        }
        int ans = binaryToDecimal(s);
        return ans;
    }
};