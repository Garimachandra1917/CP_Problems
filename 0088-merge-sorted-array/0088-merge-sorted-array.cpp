class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=m-1;
        int j=0;
        while(i>=0 && j<n)//while any of the array exhausts
        {
            if(nums1[i]>nums2[j])//compare the largest of nums1 and smallest of nums2
            {   
                swap(nums1[i],nums2[j]);//swap if nums1 is greater
                i--;
                j++;
            }
            else 
            {
                break; // if any case appaers that nums1 has lesser element ->no point to compare further as it will only                         have even lesser elements
            }
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        
        j=0;
         for(int k=m;k<m+n;k++)
        { 
             nums1[k]=nums2[j++];
        }
    
    }
    
   
    
};