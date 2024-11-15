def delete_root(heap) : n = len(heap) if n == 0 : return "Heap is empty"

#Step 1 : Replace root with last element
                                                  heap[0] = heap[n - 1] heap.pop() #Remove last element
                                                            n
                        -= 1

#Step 2 : Heapify down from the root
                        i = 0 while i < n : largest = i left = 2 *i + 1 right = 2 * i + 2

#Check left child
                                                                                        if left <
                                                                                    n
                                                                                and heap[left] > heap[largest] : largest = left

#Check right child
                                                                                                                               if right < n
                                                                                                                           and heap[right] > heap[largest] : largest = right

#If the heap property is violated, swap
                                                                                                                                                                       if largest
                                                                                                                                                                       != i : heap[i],
                        heap[largest] = heap[largest], heap[i] i = largest else : break
