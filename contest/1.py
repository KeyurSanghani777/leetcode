

# /**The Spicy auction for the cricket tournament Cosmos Premier Legue-2023 (CPL) is about to take place. All the players (total n in number) and their initial values (in crores) are listed in a row. The worth of players is known to increase unusually, with a player having a non-zero value increasing the value of surrounding players by 2 crores each day.  

# For example, if the value of ith player is non-zero, then the value of (i−1)th player will get incremented by 2 crores as well the value of (i+1)th player will get incremented by 2 crores(if they exist).

# Let's call the initial day of the auction day 0. And after that, each consecutive will be referred to as day 1, day 2, and so on.

# Now you have to find the total extra value (in crore) of all players that would have been increased on the day p compared to day 0.

# Input
# The first line contains a single integer t(1≤t≤103)— the number of test cases.

# The first line of each test case contains two integers n(1≤n≤105) and p(0≤p≤109).

# The second line contains n integers - the initial value of each player in crore on day 0.

# The Sum of n over all test cases does not exceed 106
# Output
# For each case output a single integer - total extra value (in crore) of all players that would have been increased on day p compared to day 0
# Example*/

# input for no of test cases
t = int(input())
#iterating over test cases
for i in range(t):
    print("Case #{}:".format(i+1),end=" ")
    #input for no of players and day
    n,p = map(int,input().split())
    #  print the value of n and p
    print(n,p)

    #input for initial values of players
    arr = list(map(int,input().split()))
    
    #iterating over players
    for j in range(p):
        #checking if the value of player is non zero
        if arr[j] != 0:
            # checking if the player is not the first and  last player
            if j != 0 and j != n-1:
                arr[j-1] += 2
                arr[j+1] += 2
    
    #printing the sum of all the values of players
    print(sum(arr))

