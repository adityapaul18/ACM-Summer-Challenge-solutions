for i in range(int(input())):
    x, y, a = [float(x) for x in input().split()]
    if(x*x == 4*a*y):
        print("YES")
    else:
        print("NO")