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
private:
    void InsertAtTail(Node* &head , Node* &tail , int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
    // Step 1 : Create a clone list
        
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
            InsertAtTail(cloneHead , cloneTail , temp -> val);
            temp = temp -> next;
        }

        
    //step 2 : add clone Nodes in between original list
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneHead != NULL){
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = next;
        }
        
    //Step 3 : Random pointer Copy
        
        temp = head;
        
        while(temp != NULL){
                if(temp -> next != NULL){
            temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random; // next 6                 lines in one line
            
            // if(temp -> random != NULL){
            //     temp -> next -> random = temp -> random -> next;
            // }
            // else{
            //     temp -> next = temp -> random; // NULL
            // }
        }
            temp = temp -> next -> next;
    }
  
    //Step 4 : Revert Changes done in step 2
        
         originalNode = head;
         cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;
            
            if(originalNode != NULL){
                cloneNode -> next = originalNode -> next;
            }
            cloneNode = cloneNode -> next;
        }
        
    //Step 5 : Return ans
        
        return cloneHead;
    
    }
};