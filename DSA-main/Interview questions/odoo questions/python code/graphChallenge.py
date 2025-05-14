#Input: ["4","A","B","C","D","A-B","B-D","B-C","C-D"]. #Output:A-B-D
from collections import deque

def graphChallenge(strArr):

    #step 1 : Process the input and store them in variables
    numOfNodes = int(strArr[0])  # store Number of nodes is given in input array at index 0. string to integer typecasting
    listOfNodes = strArr[1:numOfNodes+1]  # List of node names ["A", "B", "C", "D"] from index 1 to index number numOfNodesi.e 4 strArr[1:5] arr1-arr4 
    listOfConnections = strArr[numOfNodes+1:]  # List of edges ["A-B", "B-D", "B-C", "C-D"]   from index number NumOfNodes+1 i.e 5 till end of input array

    # Step 2: Build the graph
    graph = {node: [] for node in listOfNodes}  # Initialize empty adjacency list for each and every  node ex: A:[] B:[] C:[] D:[]  represent graph with help of adjacency list
    
    for connection in listOfConnections :
        node1, node2 = connection.split("-")  # Split the connection into two nodes A-B B-C B-D C-D
        graph[node1].append(node2)  # Add node2 to node1's adjacency list graph[A]=[B] 
        graph[node2].append(node1)  # Add node1 to node2's adjacency list (undirected) graph[B]=[A,C,D]

        #dry run of above for loop 
        # node1=A, node2=B A:[B] B:[A]
        # node1=B, node2=D B:[A,D] D:[B]
        # node1=B, node2=C B;[A,D,C] C:[B]
        # node1=C, node2=D C:[B,D] D:[B,C]

    # Step 3: Perform BFS to find the shortest path from the first to the last node
    start_node = listOfNodes[0]  # Start node (first node in the list)
    end_node = listOfNodes[-1]   # End node (last node in the list)
    
    #BFS step 0 is always put first/start node into the queue

    # Queue for BFS, storing (current_node, path_so_far)
    queue = deque([(start_node , [start_node])])    #push current_node into queue i.e A  and also push current node into a list path [A]
    
    # Boolean array for visited nodes (False for unvisited, True for visited)
    visited = [False] * numOfNodes #[False,False,False,False] 0th index pr false chhe that means A haji traverse nathi thayo if 2nd index ma false value stored chhe toh C haji traverse nathi thayo 

    # Mark the start node as visited
    visited[listOfNodes.index(start_node)] = True   # visited[0]=True because we have pushed start node i,e A into the queue visited[listofnodes ma start_node A no index]

    # Jya sudi queue khali nathi thai jati tya sudhi pop ane bija operations karo
    while queue:
        current_node, path = queue.popleft()  # current_node, path=  [A],[A]   [B],[A,B]    [C],[A,B,C]      [D], [A,B,C,D] 

        # Explore neighbors
        for neighbor in graph[current_node]:                   #current node =B  B:[A,D,C]  A is already visited D,C are not visited so puth them in queue and path
            neighbor_index=listOfNodes.index(neighbor)
            if  not  visited[neighbor_index]:
                queue.append((neighbor, path + [neighbor]))  # Add neighbor to queue with updated path
                visited[neighbor_index]=True  # Mark neighbor as visited
                

        # If we reach the end node, return the path as a dash-separated string
        if current_node == end_node: 
            return '-'.join(path) #[A,B,C,D] A-B-C-D [1,2,3,4,] - use karine badha list elements ne join kaerva na chhe 1-2-3-4 '.' ni madad thi join karva hoy toh 1.2.3.4


    # If we exhaust the queue without finding the last node
    return "-1"

# Example usage:
# print(graphChallenge(["4", "A", "B", "C", "D", "A-B", "B-D", "B-C", "C-D"]))  # Output: A-B-D
# print(graphChallenge(["7", "A", "B", "C", "D", "E", "F", "G", "A-B", "A-E", "B-C", "C-D", "D-F", "E-D", "F-G"]))  # Output: A-E-D-F-G

# Let's perform a dry run for your graphChallenge function using the input ["7", "A", "B", "C", "D", "E", "F", "G", "A-B", "A-E", "B-C", "C-D", "D-F", "E-D", "F-G"].

# Input Breakdown:

# Number of nodes: 7 (A, B, C, D, E, F, G)
# Connections: A-B, A-E, B-C, C-D, D-F, E-D, F-G
# Step-by-Step Dry Run:

# Step 1: Initialization
# Nodes: ["A", "B", "C", "D", "E", "F", "G"]
# Graph Construction:
# A: [B, E]
# B: [A, C]
# C: [B, D]
# D: [C, F, E]
# E: [A, D]
# F: [D, G]
# G: [F]
# We have the following adjacency list representing the graph.

# Step 2: BFS Initialization

# Start node: A
# End node: G
# Queue: deque([("A", ["A"])]) → A node with path so far ["A"]
# Visited List: [True, False, False, False, False, False, False] → only "A" is visited.

# Step 3: BFS Iteration 1
# Dequeue ("A", ["A"])
# Current node: A, Path so far: ["A"]
# Explore neighbors: B, E
# Mark B as visited and enqueue ("B", ["A", "B"])
# Mark E as visited and enqueue ("E", ["A", "E"])
# Queue: deque([("B", ["A", "B"]), ("E", ["A", "E"])])
# Visited: [True, True, False, False, True, False, False]

# Step 4: BFS Iteration 2
# Dequeue ("B", ["A", "B"])
# Current node: B, Path so far: ["A", "B"]
# Explore neighbors: A, C (A already visited, ignore it)
# Mark C as visited and enqueue ("C", ["A", "B", "C"])
# Queue: deque([("E", ["A", "E"]), ("C", ["A", "B", "C"])])
# Visited: [True, True, True, False, True, False, False]

# Step 5: BFS Iteration 3
# Dequeue ("E", ["A", "E"])
# Current node: E, Path so far: ["A", "E"]
# Explore neighbors: A, D (A already visited, ignore it)
# Mark D as visited and enqueue ("D", ["A", "E", "D"])
# Queue: deque([("C", ["A", "B", "C"]), ("D", ["A", "E", "D"])])
# Visited: [True, True, True, True, True, False, False]

# Step 6: BFS Iteration 4
# Dequeue ("C", ["A", "B", "C"])
# Current node: C, Path so far: ["A", "B", "C"]
# Explore neighbors: B, D (both already visited, ignore them)
# Queue: deque([("D", ["A", "E", "D"])])

# Step 7: BFS Iteration 5
# Dequeue ("D", ["A", "E", "D"])
# Current node: D, Path so far: ["A", "E", "D"]
# Explore neighbors: C, F, E (C and E already visited, ignore them)
# Mark F as visited and enqueue ("F", ["A", "E", "D", "F"])
# Queue: deque([("F", ["A", "E", "D", "F"])])
# Visited: [True, True, True, True, True, True, False]

# Step 8: BFS Iteration 6
# Dequeue ("F", ["A", "E", "D", "F"])
# Current node: F, Path so far: ["A", "E", "D", "F"]
# Explore neighbors: D, G (D already visited)
# Mark G as visited and enqueue ("G", ["A", "E", "D", "F", "G"])
# Queue: deque([("G", ["A", "E", "D", "F", "G"])])
# Visited: [True, True, True, True, True, True, True]

# Step 9: BFS Iteration 7
# Dequeue ("G", ["A", "E", "D", "F", "G"])
# Current node: G, Path so far: ["A", "E", "D", "F", "G"]
# Since G is the end node, return "A-E-D-F-G".
# Final Output:
# The shortest path is A-E-D-F-G.
