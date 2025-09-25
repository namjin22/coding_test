test = int(input())

for a in range(test):
    R, S = input().split()
    R = int(R)
    
    for b in S:
        print(b * R, end = "")
        
    print()