class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr || l2 == nullptr) return l1 == nullptr ? l2 : l1 ; 
        ListNode *dummy = new ListNode(2) ;
        ListNode *dummyH = dummy ;
        ListNode *c1 , *c2 ;
        c1 = l1 , c2 = l2 ;
        while(c1!=nullptr && c2!=nullptr){
            if(c1->val <= c2->val){
                dummy->next = c1 ;
                c1 = c1->next;
            }
            else if(c1->val > c2->val){
                dummy->next = c2 ;
                c2 = c2->next;
            }
                      
            dummy = dummy->next ;
        }
         while(c1!=nullptr) {dummy->next = c1 ;  dummy = dummy->next ; c1 = c1->next;}
         while(c2!=nullptr) {dummy->next = c2 ;  dummy = dummy->next ;  c2 = c2->next;}
        
        return dummyH->next ;
        
    }
};