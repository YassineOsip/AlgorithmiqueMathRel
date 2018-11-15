def fact(n):
    """fact(n): calcule la factorielle de n (entier >= 0)"""
    if n<2:
        return 1
    else:
        temp = n * fact(n-1)
        print(temp)

fact(2)
