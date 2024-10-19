def solve():
    t = int(input())  # Number of test cases
    for _ in range(t):
        n = int(input())  # Length of the binary string
        s = input().strip()  # The binary string
        
        # Find the first occurrence of '0'
        first_zero = s.find('0')
        
        # If there's no '0', Alice wins
        if first_zero == -1:
            print("YES")
        # If the first '0' is at an odd index (1-based), Alice wins
        elif first_zero % 2 == 0:
            print("YES")
        # If the first '0' is at an even index (1-based), Bob wins
        else:
            print("NO")

# Run the solve function
solve()
