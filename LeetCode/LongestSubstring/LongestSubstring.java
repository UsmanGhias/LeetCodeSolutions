import java.util.*;
import java.io.*;
//import END
class LongestSubstring {
    //Function
    public int lengthOfLS(String s) {

        int n = s.length();
 
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkRepetition(s, i, j)) {
                    res = Math.max(res, j - i + 1);
                }
            }
        }
 
        return res;
    }
 
    private boolean checkRepetition(String s, int start, int end) {
        int[] chars = new int[128]; // array Object
 // Checking in Chracrter is repiting
        for (int i = start; i <= end; i++) {
            char c = s.charAt(i);// Storing character
            chars[c]++;// Character repition storing
            if (chars[c] > 1) {
                return false;
            }
        }
        return true;
    }
    //Driver Class Main
    public static void main(String args[]) {
        
        LongestSubstring object1 = new LongestSubstring();
        String s = "UsmanGhiasHNhbjhgha";
        System.out.println(object1.lengthOfLS(s));
    }
}

