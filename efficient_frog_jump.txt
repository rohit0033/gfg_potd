# gfg_potd
Approach :
 

The approach here uses a BitSet data structure to keep track of the visited leaves.

 

In Java and C++ , a BitSet is a class that represents a fixed-size sequence of bits, with each bit having a value of either 0 or 1. It provides a convenient way to manipulate sets of bits and perform bitwise operations.

 

The video link below explains about the BitSet Data structure and explains clearly how to use the same in both solutions of Java and C++ :

 

Frogs and Jumps

 

Algorithm :

 

The algorithm uses a BitSet data structure to keep track of the visited leaves. The BitSet is initialized to have leaves + 1 bits, where the extra bit is used to account for the fact that arrays are zero-indexed in Java.

 

The program then iterates over the array of frogs, checking each frog's position to see if it is within the range of the tree (i.e., frog <= leaves) and whether it has not been visited before (i.e., !visited.get(frog)). If the frog has not been visited before, the program uses a loop to set the bits in the BitSet corresponding to all the leaves that the frog can reach by jumping on them (i.e., visited.set(j) for j = frog, frog*2, frog*3, ..., leaves).

 

Once the BitSet is updated, Since we're using a BitSet to mark which leaves have been visited by the frogs, the number of unvisited leaves is simply the total number of leaves minus the number of visited leaves (i.e., the number of unset bits in the visited BitSet). Therefore, leaves - visited.cardinality() gives us the number of unvisited leaves. Here, in java visited.cardinality() returns the number of set bits (i.e., 1's) in the visited BitSet. The corresponding function in C++ is visited.count() .

 

The program returns the total number of unvisited leaves.

 

Time Complexity :

 

The time complexity of the above solution is O(N*log(leaves)), where N is the number of frogs and leaves is the maximum number of leaves. This is because the algorithm iterates over each frog in the array and then checks and sets the multiples of the frog using the BitSet, which has a time complexity of O(log(leaves)). Therefore, the time complexity of the algorithm becomes O(N*log(leaves)).
