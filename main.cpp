class Solution {
public:
    
    string toString(int temp){

        stringstream ss;
        ss << temp;
        string str = ss.str();
        return str;
    }
    
    void getString( TreeNode* root, string &res){
        
        if(!root) return ;
        res.push_back('(');
        res = res + toString(root->val);
        
        getString(root->left,res);
        if(root->left == NULL && root->right) res = res + "()";
        getString(root->right,res);
        res.push_back(')');
    }
    
    
    
    string tree2str(TreeNode* root) {

        string res = "";
        res = res + toString( root->val);
        getString(root->left,res);
        if(root->left == NULL && root->right) res = res + "()";
        getString(root->right,res);
        
        return res;
    }
};
