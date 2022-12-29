#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        // Write your code here
        if(isEmpty())
            return 0;
        
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int parentIndex = 0;
        int childIndex1 = 2*parentIndex + 1;
        int childIndex2 = 2*parentIndex + 2;
        while(childIndex1 < pq.size()-1){
            
 			int minIndex = parentIndex;
            if(pq[minIndex] > pq[childIndex1]){
                minIndex = childIndex1;
            }
            if(childIndex2 < pq.size()-1 && pq[minIndex] > pq[childIndex2]){
                minIndex = childIndex2;
            }
            if(minIndex == parentIndex){
                break;
            }
            int temp = pq[parentIndex];
            pq[parentIndex] = pq[minIndex];
            pq[minIndex] = temp;
            
            parentIndex = minIndex;
            childIndex1 = 2*parentIndex + 1;
          	childIndex2 = 2*parentIndex + 2;
        }
        return ans;
    }
};