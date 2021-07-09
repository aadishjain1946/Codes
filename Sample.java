import java.util.*;

public class Sample {

  //class to build max heap
  public static class HeamMax {

    private ArrayList<Integer> heap;
    private int size;

    //constructor to initialize heap array with given size
    public HeamMax(int n) {
      this.size = n;
      this.heap = new ArrayList<Integer>(n);
    }

    //default constructor to initialize object
    public HeamMax() {
      this.size = 0;
      this.heap = new ArrayList<Integer>();
    }

    //fucntion to check if heap is empty or not
    public boolean isEmpty() {
      return heap.size() == 0;
    }

    //function to display all heap element
    public void display() {
      System.out.print("Elements inside heap are: ");
      for (int i = 0; i < heap.size(); i++) {
        System.out.print(heap.get(i) + " ");
      }
    }

    //function to get max value from heap.
    public int getMax() {
      if (isEmpty()) {
        return -1;
      }
      return heap.get(0);
    }

    //function to insert element in heap
    public void insert(int element) {
      if (heap.size() >= this.size) {
        System.out.println("Cannot insert element in Heap.");
        return;
      }
      heap.add(element);
      int childInd = heap.size() - 1;
      int parentInd = (childInd - 1) / 2;
      while (childInd > 0) {
        if (heap.get(childInd) > heap.get(parentInd)) {
          int sudo = heap.get(childInd);
          heap.set(childInd, heap.get(parentInd));
          heap.set(parentInd, sudo);
          childInd = parentInd;
          parentInd = (childInd - 1) / 2;
        } else {
          return;
        }
      }
    }

    //function to remove top element from heap
    public int removeMax() {
      if (isEmpty()) {
        return Integer.MIN_VALUE;
      }
      int ans = heap.get(0);
      heap.set(0, heap.get(heap.size() - 1));
      heap.remove(heap.size() - 1);
      int ind = 0;
      int maxind = ind;
      int leftCInd = 1;
      int rightCInd = 2;
      while (leftCInd < heap.size()) {
        if (heap.get(leftCInd) > heap.get(maxind)) {
          maxind = leftCInd;
        }
        if (rightCInd < heap.size() && heap.get(rightCInd) > heap.get(maxind)) {
          maxind = rightCInd;
        }
        if (maxind == ind) {
          break;
        } else {
          int sudo = heap.get(ind);
          heap.set(ind, heap.get(maxind));
          heap.set(maxind, sudo);
          ind = maxind;
          leftCInd = 2 * ind + 1;
          rightCInd = 2 * ind + 2;
        }
      }
      return ans;
    }

    //function to build heap using given array
    public void build(int[] arr) {
      for (int i = 0; i < arr.length; i++) {
        this.insert(arr[i]);
      }
    }
  }

  //function to return kth largest element in the matrix
  public static int KthBiggest(int[][] matrix, int k) {
    int n = matrix.length;
    int m = matrix[0].length;
    HeamMax h1 = new HeamMax(n * m);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        h1.insert(matrix[i][j]);
      }
    }
    for (int i = 0; i < k - 1; i++) {
      h1.removeMax();
    }
    return h1.getMax();
  }

  public static void main(String[] args) {
    int[][] matrix = { { 1, 5, 9 }, { 10, 11, 13 }, { 12, 13, 15 } };
    int k = 2;
    System.out.println(
      "Kth Biggest element in the matrix is " + KthBiggest(matrix, k)
    );
  }
}
