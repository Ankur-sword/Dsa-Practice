class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();
        reverse_recursion(0,s,n-1);
        
    }
    void reverse_recursion(int i,vector<char>&s,int j)
    {
        if(i<j)
        {
            swap(s[i],s[j]);
            i++,j--;
            reverse_recursion(i,s,j);
        }
        return;
    }
};
