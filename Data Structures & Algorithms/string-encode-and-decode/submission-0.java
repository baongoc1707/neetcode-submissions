class Solution {

    public String encode(List<String> strs) {
        if(strs.isEmpty() || strs == null) return "";
        
        StringBuilder sb = new StringBuilder();

        for(String s: strs) {
            sb.append(s.length()).append("#").append(s);
        }

        return sb.toString();
    }

    public List<String> decode(String str) {
        List<String> res = new ArrayList<>();
        int i = 0;

        while(i < str.length()) {
            int slash = str.indexOf("#", i),
                size = Integer.parseInt(str.substring(i, slash));

            i = slash + 1;
            res.add(str.substring(i, i + size));

            i += size;
        }
        return res;
    }
}
