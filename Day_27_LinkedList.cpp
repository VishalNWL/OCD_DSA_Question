//Deleting node from DLL
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        int count=1;
        if(x==1){
            Node* h=head->next;
            h->prev=NULL;
            delete head;
            return h;
        }
        
        Node*curr=head;
        while(count!=x){
            curr=curr->next;
            count++;
        }
        
        if(curr->next!=NULL){
            curr->next->prev=curr->prev;
        }
        curr->prev->next=curr->next;
        delete curr;
        return head;
        
    }
};

Approach:Traverse to the node then delete it 
Time Complexity:O(N)
Space Complexity:O(1)

//Reversing a DLL
  class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
       DLLNode*curr=head;
       DLLNode*preve=NULL;
       DLLNode*nexte=head->next;
       
       while(curr->next!=NULL){
           curr->next=preve;
           curr->prev=nexte;
           preve=curr;
           curr=nexte;
           if(nexte!=NULL){
               nexte=nexte->next;
           }
       }
       
       curr->next=preve;
       curr->prev=NULL;
       return curr;
    }
};

Approach: Created three pointer one is preve , curr, nexte  so idea is to traverse all this pointer through and reversing curr next and prev with the nexte and preve
Time Complexity:O(N)
Space Complexity:O(1)
  
