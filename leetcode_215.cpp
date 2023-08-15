class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       

        priority_queue<int> q;
        for(auto i:nums)
        {
            q.push(i);
        }
        k=k-1;
        while(k--)
        {
            q.pop();
        }
        return q.top();
    }
};
