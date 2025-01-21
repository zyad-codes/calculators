import time
w = "2"
while w == "2":
    h = str(input("num one "))
    x = float(h)
    r = str(input("num two "))
    i = float(r)
    z = str(input("1+ 2* 3- 4/ (5 stop) select Arithmetic operation by the number:"))
    def y():
        print("wait looding")
    def j ():
        time.sleep(3)
    if z == "1":
        y()
        j()
        print(x + i)
    if z == "2":
        y()
        j()
        print(x * i)
    if z == "3":
        y()
        j()
        print(x - i)
    if z == "4":
        y()
        j()
        print(x / i)
    if z == "5":
        break
