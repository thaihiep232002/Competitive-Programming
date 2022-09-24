package Strings;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Solution {
    public static void ReverseString(char[] s) {
        int left = 0;
        int right = s.length - 1;
        while(left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }

    public static String LongestCommonPrefix1(String[] strs) {
        if (strs.length == 0) return "";
        int n = strs[0].length();
        int index = 0;
        for (int i = 1; i < strs.length; i++) {
            if (strs[i].length() < n) {
                n = strs[i].length();
                index = i;
            }
        }
        String prefix = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < strs.length; j++) {
                if (strs[j].charAt(i) != strs[index].charAt(i)) {
                    return prefix;
                }
            }
            prefix = prefix + strs[index].charAt(i);
        }

        return prefix;
    }

    public static String LongestCommonPrefix2(String[] strs) {
        if (strs.length == 0) return "";
        String prefix = strs[0];
        for (int i = 1; i < strs.length; i++) {
            while (strs[i].indexOf(prefix) != -1) {
                prefix = prefix.substring(0, prefix.length() - 1);
            }
            if (prefix == "") return "";
        }
        return prefix;
    }

    public static List<String> findRepeatedDnaSequences(String s) {
        final int longOfDnaSequences = 10;
        List<String> result = new ArrayList<>();
        Set<String> mySet = new HashSet<>();

        for (int i = 0; i < s.length() - longOfDnaSequences + 1; i++) {
            String Dna = s.substring(i, longOfDnaSequences + i);

            if(mySet.contains(Dna)) {
                boolean isExisted = false;
                for (String str : result) {
                    if (str.equals(Dna)) {
                        isExisted = true;
                        break;
                    }
                }
                if (isExisted == false) {
                    result.add(Dna);
                }
            } else {
                mySet.add(Dna);
            }
        }

        return result;
    }
}
