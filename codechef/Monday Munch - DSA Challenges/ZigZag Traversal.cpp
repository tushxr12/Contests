/*
struct Node {
    int val; 
    Node *left;
    Node *right;

    Node(int node_value) {
        val = node_value;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    void zigzagTraversal(Node* root) {
        // your code goes here
        if(!root)
            return;
        
        queue<Node*> q;
        q.push(root);
        bool leftToRight = true;
        
        while(!q.empty()){
            int sz = q.size();
            vector<int> lvl(sz);
            for(int i = 0;i < sz;i++){
                Node* currNode = q.front();
                q.pop();
                
                int index = leftToRight ? i : (sz - i - 1);
                lvl[index] = currNode->val;
                
                if(currNode->left){
                    q.push(currNode->left);
                }
                if(currNode->right){
                    q.push(currNode->right);
                }
            }
            leftToRight = !leftToRight;
            for(auto i : lvl){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
};
