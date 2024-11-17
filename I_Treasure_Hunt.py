# Python implementation of the knapsack problem

def knapsack(n, s, w, v, dp):
    # Base case: no items or no remaining weight capacity
    if s == 0 or n == 0:
        return 0
    
    # If this subproblem is already solved, return the cached result
    if dp[n][s] != -1:
        return dp[n][s]
    
    # If the item can fit in the knapsack
    if w[n - 1] <= s:
        # Option 1: Include the item
        op1 = knapsack(n - 1, s - w[n - 1], w, v, dp) + v[n - 1]
        # Option 2: Exclude the item
        op2 = knapsack(n - 1, s, w, v, dp)
        # Store the maximum value of the two options
        dp[n][s] = max(op1, op2)
    else:
        # If item cannot be included, exclude it
        dp[n][s] = knapsack(n - 1, s, w, v, dp)
    
    return dp[n][s]

# Main function to initialize variables and call knapsack
if __name__ == "__main__":
    # Input number of items and knapsack capacity
    n = int(input())
    s = int(input())
    
    # Input weights and values
    w = []
    v = []
    for i in range(n):
        weight, value = map(int, input().split())
        w.append(weight)
        v.append(value)
    
    # Initialize dp array with -1 for memoization
    dp = [[-1 for _ in range(s + 1)] for _ in range(n + 1)]
    result = knapsack(n, s, w, v, dp)
    print(result)
