import java.util.HashMap;

public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++ ) {
            int complement = target - nums[i]; // target = 9 nums[0] = 2
            // complement = 7
            // target = 9 nums[1] = 7
            // complement = 2
            // if in map complement exist
            if ( map.containsKey(complement) ) {
                return new int [] { map.get(complement), i };
            }

            map.put(nums[i], i);

        }

        // no solution
        return new int[] {};
    }
}
