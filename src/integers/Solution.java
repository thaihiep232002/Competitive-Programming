package integers;

import java.util.*;

public class Solution {
    public static List<String> Fizzbuzz(int n) {
        List<String> result = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.add("FizzBuzz");
            } else if (i % 3 == 0) {
                result.add("Fizz");
            } else if (i % 5 == 0) {
                result.add("Buzz");
            } else {
                result.add(Integer.toString(i));
            }
        }
        return result;
    }

    public static int SingleNumber(int[] nums) {
        if (nums.length == 1) {
            return nums[0];
        }

        Set<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; ++i) {
            if (set.contains(nums[i])) {
                set.remove(nums[i]);
            } else {
                set.add(nums[i]);
            }
        }

        int result = set.iterator().next();
        return result;
    }

    public static int ReverseInteger(int n) {
        int result = 0;

        final int MAX_INT = Integer.MAX_VALUE;
        final int MIN_INT = Integer.MIN_VALUE;
        while (n != 0) {
            int lastDigit = n % 10;
            if (result > MAX_INT / 10 || (result == MAX_INT / 10 && lastDigit > 7 )) {
                return 0;
            }

            if (result < MIN_INT / 10 || (result == MAX_INT / 10 && lastDigit < -8 )) {
                return 0;
            }

            result = 10 * result + lastDigit;
            n = n / 10;
        }
        return result;
    }

    static boolean isPalindrome(int x) {
        int match = 0;
        while (x != 0) {
            int lastDigit = x % 10;
            match = 10 * match + lastDigit;
            System.out.println(match);
            System.out.println(x);
            if (match == x) return true;

            x = x / 10;
        }
        return false;
    }
    
}
