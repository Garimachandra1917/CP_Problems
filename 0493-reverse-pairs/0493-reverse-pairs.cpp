class Solution {
public:
    
    //merge function - merging left and right arrays together 
void merge(vector<int>& arr , int low, int mid , int high)
{
    vector<int>temp;
    //left array [low...mid]
    int left=low;
    //right array [mid+1...high]
    int right=mid+1;
    //merging while both of the arrays exists
    while(left<=mid && right<=high)
    {
       if(arr[left]<=arr[right])
       {
           temp.push_back(arr[left]);
           left++;
       }
       else
       {
           temp.push_back(arr[right]);
           right++;
       }

    }
     //right array exhauted - only left remaining 
       while(left<=mid)
       {
           temp.push_back(arr[left]);
           left++;  
       }
       
       //left array exhausted - only right remaining
       while(right<=high)
       {
            temp.push_back(arr[right]);
            right++;
       }

    //putting back in original array
     for(int i=low;i<=high;i++)
    {
      arr[i]=temp[i-low];
    }
}
    
int count_pair(vector<int>&arr,int low,int mid ,int high)
{
    int right=mid+1;
    int cnt=0;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && arr[i]> (long long)2*(arr[right])) right++;
        
        cnt += right-(mid+1);
    }
    return cnt;
}

int ms(vector<int>& arr , int low, int high)
{   
    int cnt=0;
    //performing divide till only one element is remaining
    if(low>=high) return cnt ;

    int mid = (low+high)/2;

    //sorting left array
    cnt +=  ms(arr, low, mid);
    
    //sorting right array
    cnt += ms(arr, mid+1,high);
    
    cnt += count_pair(arr, low, mid ,high);

    //merging both sorted arrays
    merge(arr,low,mid,high);
    
    return cnt;
}


    
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return ms(nums,0,n-1);
    }
};