/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    Node* detectCycle(Node* head)
    {
        Node* slow = head, *fast = head;
        bool hasCycle = false;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                hasCycle = true;
                break;
            }
        }
        
        if(!hasCycle)
            return NULL;
            
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};
