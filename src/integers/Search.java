package integers;

public class Search {
    static int utilBinary(int[] array, int left, int right, int target) {
        if (left > right) {
            return -1;
        }
        int mid = (right + left + 1) / 2;
        if (array[mid] == target) {
            return mid;
        } else if (array[mid] > target) {
            return utilBinary(array, left, mid - 1, target);
        } else {
            return utilBinary(array, mid + 1, right, target);
        }
    }
    static int binary(int[] array, int target) {
        int left = 0;
        int right = array.length - 1;
        return utilBinary(array, left, right, target);
    }
}
