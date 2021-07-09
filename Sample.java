import java.util.*;

public class Sample<T1, T2> {

  public static class HeamMax {

    private ArrayList<Integer> heap;
    private int size;

    public HeamMax(int n) {
      this.size = n;
      this.heap = new ArrayList<Integer>(n);
    }
    public HeamMax(){}
    public boolean isEmpty() {
      return heap.size() == 0;
    }

    public void display() {
      System.out.print("Elements inside heap are: ");
      for (int i = 0; i < heap.size(); i++) {
        System.out.print(heap[i] + " ");
      }
    }

    public int getMax() {
      if (isEmpty()) {
        return Integer.MIN_VALUE;
      }
      return heap.get(0);
    }

    public void insert(int element) {
      if (heap.size() >= this.size) {
        System.out.println("Cannot insert element in Heap.")
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
        if (
          rightCInd < heap.size() &&
          heap.get(rightCInd) > heap.get(maxind)
        ) {
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
    public void build(int[] arr){
      for(int i = 0;i<arr.length;i++){
        this.insert(arr[i]);
      }
    }
  }

  public static void main(String[] args) {}
}
