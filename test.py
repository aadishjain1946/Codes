def helper(heap, n, index):
    temp = index
    left = 2 * index + 1
    right = 2 * index + 2

    if left < n and heap[index] < heap[left]:
        temp = left

    if right < n and heap[temp] < heap[right]:
        temp = right

    if temp != index:
        heap[index], heap[temp] = heap[temp], heap[index]

        helper(heap, n, temp)


def sortHeap(heap):
    n = len(heap)

    for i in range(n // 2 - 1, -1, -1):
        helper(heap, n, i)

    for i in range(n - 1, 0, -1):
        heap[i], heap[0] = heap[0], heap[i]
        helper(heap, i, 0)


def main():
    heap = [9, 7, 12, 14, 5, 17, 19]
    sortHeap(heap)
    n = len(heap)
    print("Sorted array: ", end="")
    for i in range(n):
        print(heap[i], end=" ")


if __name__ == "__main__":
    main()
