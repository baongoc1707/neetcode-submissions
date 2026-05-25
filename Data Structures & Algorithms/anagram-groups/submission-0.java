class Solution {
    public static final int[] PRIMES = new int[26];

    // Static Initialization Block: 
    // Khối này chạy tự động 1 lần duy nhất khi class được nạp vào bộ nhớ.
    // Nó đảm bảo mảng PRIMES được lấp đầy dữ liệu trước khi hàm groupAnagrams chạy.
    static {
        int count = 0,
            num = 2;
        while(count < 26) {
            if(isPrime(num)) PRIMES[count++] = num;
            num++;
        }
    }

    private static boolean isPrime(int n) {
        for(int i = 2; i <= n / i; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

    private long computeHash(String s) {
        long hash = 1;
        for(char c: s.toCharArray()) {
                int val = (c >= 'a') ? (c - 'a') : (c - 'A');
                hash *= PRIMES[val];
        }
        return hash;
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        Map<Long, List<String>> map = new HashMap<>();

        for(String s: strs) {
            long hash = computeHash(s);
            map.computeIfAbsent(hash, k -> new ArrayList<>()).add(s);
        }

        return new ArrayList<>(map.values());
    }
}
