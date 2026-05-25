class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;
        
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        
        return Arrays.equals(sArr, tArr);
    }

    public void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("First String: ");
        String str1 = sc.nextLine().replaceAll("\\s+","").toLowerCase().trim();
        System.out.print("Second String: ");
        String str2 = sc.nextLine().replaceAll("\\s+","").toLowerCase().trim();
        System.out.println("Is an anagram?\nAnswer: " + isAnagram(str1, str2));
    }
}
