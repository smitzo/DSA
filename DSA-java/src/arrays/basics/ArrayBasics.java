public class ArrayBasics {

    // A global array (outside the main method) declaration.
    // It is initialized with a size of 0, meaning it's empty. 
    // Note: Global arrays generally have higher memory limits than local arrays.
    int[] globalArr = new int[0]; 

    // Main method - execution starts from here.
    public static void main(String[] args) {

        // Declare and initialize an array of size 10.
        int[] arr = new int[10];

        /* Arrays in Java are reference types, meaning they point to a memory location.
           When an array is created, Java initializes each element with a default value (0 for integers).
           In this case, since we are using an array of integers, all elements are initialized to 0. */
        
        // Loop through each element of the array and print its value.
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Element at index " + i + ": " + arr[i]);
        }

        /* Notes:
           1. Arrays in Java are of fixed size, meaning once you define the size, it cannot be changed.
              Example: `int[] arr = new int[10];` creates an array with 10 elements.
           2. The default values for arrays in Java are set based on the type of data:
              - For integers, the default value is `0`.
              - For booleans, the default is `false`.
              - For reference types (objects), the default value is `null`. */

        // Demonstrating array initialization with specific values:
        int[] customArr = {10, 20, 30, 40, 50};  // Array initialization with predefined values.
        
        // Print the elements of customArr.
        System.out.println("\nCustom Array:");
        for (int i = 0; i < customArr.length; i++) {
            System.out.println("Element at index " + i + ": " + customArr[i]);
        }
        
        /* Explanation of memory allocation:
           When you create an array like `new int[10]`, the memory allocation happens as follows:
           - The JVM allocates a block of memory in the heap.
           - The array elements (integers, in this case) are initialized to their default values (0 for integers).
           - The array variable holds a reference to the memory address of the first element.

           If this array were a global array (i.e., declared outside of main()), the memory limit could be larger (up to 10^7 elements depending on JVM configurations).
           Local arrays in methods have a smaller memory limit (typically up to 10^6 elements). */

        // Example of an array with predefined size
        int[] predefinedArr = new int[5]; // Size is fixed at 5.

        // Initialize array manually
        predefinedArr[0] = 10;
        predefinedArr[1] = 20;
        predefinedArr[2] = 30;
        predefinedArr[3] = 40;
        predefinedArr[4] = 50;

        System.out.println("\nPredefined Array with manual initialization:");
        for (int i = 0; i < predefinedArr.length; i++) {
            System.out.println("Element at index " + i + ": " + predefinedArr[i]);
        }

        /* Additional Notes:
           - An array in Java is always a reference type. Even though an array is created with `new`, it points to a memory location where elements are stored.
           - You cannot change the size of an array once it has been created. To "resize", you need to create a new array and copy the elements.
           - Arrays are contiguous blocks of memory, meaning elements are stored next to each other, allowing for efficient indexing.
           - Array index starts at 0, so the valid indices for an array of size `n` are from `0` to `n - 1`.
           - Accessing an invalid index results in an `ArrayIndexOutOfBoundsException`. */
    }
}
