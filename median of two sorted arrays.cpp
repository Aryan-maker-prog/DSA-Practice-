class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            ans.push_back(nums2[j]);
            j++;
        }
        int ans2=ans.size()/2;
        double mainans;
        double maians2;
        double ans5;

        for(int i=0;i<ans.size();i++)
        {
            if(ans.size()%2==0)
            {
                ans5=ans[ans2]+ans[ans2-1];
                mainans=ans5/2;
            }
            if(ans.size()%2!=0)
            {
                mainans=ans[ans2];
            }
        }
       return mainans;
    }
};
