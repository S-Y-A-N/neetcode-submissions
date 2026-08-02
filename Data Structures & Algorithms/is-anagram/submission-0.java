class Solution {
    public boolean isAnagram(String s, String t) {
        char[] ss = s.toCharArray();
        char[] tt = t.toCharArray();
        Arrays.sort(ss);
        Arrays.sort(tt);
        s = new String(ss);
        t = new String(tt);
        if (s.equals(t)) {
            return true;
        }
        return false;
    }
}
