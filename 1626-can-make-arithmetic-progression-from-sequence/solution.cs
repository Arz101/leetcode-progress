public class Solution {
  public bool CanMakeArithmeticProgression(int[] arr) {
    Array.Sort(arr);
    int j = 1, r = arr[0] - arr[1];
    for(int i=0; j<arr.Length; i++){
      if((arr[i] - arr[j]) == r) j++;
      else return false;

    }
    return true;
  }
}
