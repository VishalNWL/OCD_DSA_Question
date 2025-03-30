// adding node in DLL
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        Node* newnode=new Node(data);
        
        if(pos==0){
            newnode->next=head;
            head->prev=newnode;
            newnode->prev=NULL;
            return newnode;
        }
        
        Node*curr=head;
        int count=0;
        while(count!=pos){
            curr=curr->next;
            count++;
        }
        
        newnode->next=curr->next;
        if(curr->next!=NULL){
            curr->next->prev=newnode;
        }
        curr->next=newnode;
        newnode->prev=curr;
        
        return head;
    }
};

Approach : Iterating to the position and then insert new element
Time complexity:O(N);
Space complexity:O(1);

