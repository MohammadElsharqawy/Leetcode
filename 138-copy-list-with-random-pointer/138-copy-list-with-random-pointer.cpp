/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // o(n) time,  o(n) space
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>clone;
        
        Node* ptr = head;
        while(ptr){
            clone[ptr] = new Node(ptr->val);
            ptr = ptr->next;
        }
        
        ptr=head;
        
        while(ptr){
            clone[ptr]->next = clone[ptr->next]; 
            clone[ptr]->random = clone[ptr->random];
            ptr=ptr->next;
        }
        
        return clone[head];
    }
};