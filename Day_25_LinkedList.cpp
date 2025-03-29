//Delete a node
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

  
