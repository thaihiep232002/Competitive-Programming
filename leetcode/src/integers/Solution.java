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
        // 123321
        // i have done
        int match = 0;
        while (match < x) {
            int lastDigit = x % 10;
            match = 10 * match + lastDigit;
            x = x / 10;
        }
        return match == x || (match / 10) == x;
    }

    static int Pow(int x, int n) {
        if (n == 1) {
            return x;
        } else {
            if (n % 2 == 0) {
                int t = Pow(x, n / 2);
                return t * t;
            } else {
                return x * Pow(x, n - 1);
            }
        }
    }
}