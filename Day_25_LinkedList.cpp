1.//Delete a node
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

Approach:we are given the node which we have to delete so we don't have access of previous node but we have access of node ahead from it and prev have only access of given node so we just copy val of ahead node to the 
  current node then link current node to then next to next node so that we can delete the next node;

Time Complexity:O(1)
Space Compleixty:O(1)

My Approach:
class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node->next!=NULL){
            node->val=node->next->val;
            if(node->next->next!=NULL){
              node=node->next;
            }
            else{
                node->next=NULL;
            }
        }
        
    }
};
Appraoch :start copying next val to current node until the next to next is not null then remove that node
Time Complexity:O(N)
Space Compleixty:O(1)


//2.Insertin at the end
    class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* newnode=new Node(x);
        newnode->next=NULL;
        
        if(head==NULL){
            return newnode;
        }
        
        Node*curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        
        curr->next=newnode;
        return head;
    }
};

Appraoch :just traverse to the end then add a element

  Time Complexity:O(N)
Space Compleixty:O(1)
