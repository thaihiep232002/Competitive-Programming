package integers;

public class Sort {
    static void selectionSort(int[] A, int n) {
        for (int i = 0; i < n - 1; i++) {
            int iMin = i;
            for (int j = i + 1; j < n; j++) {
                if (A[j] < A[iMin]) {
                    iMin = j;
                }
            }
            int temp = A[i];
            A[i] = A[iMin];
            A[iMin] = temp;
        }
    }

    static void bubbleSort(int[] A, int n) {
        for (int k = 0; k < n - 1; k++) {
            for (int j = 0; j < n - k - 1; j++) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
//    static int partition(int[] A, int left, int right, int pivot) {
//        while (left < right) {
//            while(A[left] <= pivot && left < right) left++;
//            while(A[right] >= pivot && left < right) right--;
//            int temp = A[left];
//            A[left] = A[right];
//            A[right] = temp;
//        }
//
//
//    }

//    static void quickSort(int[] A, int lowIndex, int highIndex) {
//        if (lowIndex >= highIndex) return;
//        int pivot = A[highIndex];
//
//        int leftPointer = partition(A, lowIndex, highIndex - 1, pivot);
//
//        quickSort(A, lowIndex, leftPointer - 1);
//        quickSort(A, leftPointer + 1, highIndex);
//    }

}
