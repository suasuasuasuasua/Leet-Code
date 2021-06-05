/*

*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int[] solution = {-1, -1};
        
        for (int i = 0; i < nums.length; i++) {
            for (int j = 1; j < nums.length; j++) {
                
                if ( !(i == j) && (nums[i] + nums[j] == target) ) {
                    solution[0] = i;
                    solution[1] = j;
                    return solution;
                }
                
            }
        }
        return solution;
    }

    public static void main(String[] args) {

        Solution twoSum = new Solution();

        int[] nums = {2,7,11,15};
        int target = 9;

        int[] Solution = twoSum.twoSum(nums, target);

        for (int i = 0; i < Solution.length; i++) {
            System.out.println(Solution[i]);
        }

    }
}