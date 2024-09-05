class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        int sum = 0;
        
        for(int roll : rolls) sum+=roll;
        
        int remaining = mean* (n + rolls.length) - sum;

        if(remaining < n || remaining > 6 * n) return new int[0];

        int distribute = remaining / n;
        int mod = remaining % n;
        int[] elements = new int[n];
        Arrays.fill(elements, distribute);
        for(int i = 0; i < mod; i++){
            elements[i]++;
        }

        return elements;
    }
}
