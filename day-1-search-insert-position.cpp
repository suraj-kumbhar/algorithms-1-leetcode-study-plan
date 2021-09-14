// 35. Search Insert Position
//     Easy

//     4627

//     318

//     Add to List

//         Share
//             Given a sorted array of distinct integers and a target value,
//     return the index if the target is found.If not, return the index where it would be if it were inserted in order.

//                                                            You must write an algorithm with
//                                                            O(log n) runtime complexity.

//                                                            Example 1 :

//     Input : nums = [ 1, 3, 5, 6 ],
//             target = 5 Output : 2 Example 2 :

//     Input : nums = [ 1, 3, 5, 6 ],
//             target = 2 Output : 1 Example 3 :

//     Input : nums = [ 1, 3, 5, 6 ],
//             target = 7 Output : 4 Example 4 :

//     Input : nums = [ 1, 3, 5, 6 ],
//             target = 0 Output : 0 Example 5 :

//     Input : nums = [1],
//             target = 0 Output : 0

//                      Constraints :

//                      1 <= nums.length <= 104 - 104 <=
//                      nums[i] <= 104 nums contains distinct values sorted in ascending order.- 104 <= target <= 104

class Solution
{
public:
  int searchInsert(vector<int> &nums, int t)
  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = nums.size();
    // if(t < nums[0]){
    //     return 0;
    // }
    // if(t > nums[n-1]){
    //     return n;
    // }
    int l = 0;
    int r = n - 1;
    int mid;
    while (l <= r)
    {
      mid = l + (r - l) / 2;
      if (nums[mid] == t)
      {
        return mid;
      }
      else if (t < nums[mid])
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
    return l;
  }
};