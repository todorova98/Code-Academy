#Overloading

class A:
    def __init__(self,a,b):
        self.a = a
        self.b = b
    
    def sum1(self,x,y):
        return x+y
    
class B:
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    
    def sum1(self,x,y,z):
        return x+y+z
    
a=A(3,4)
b=B(5,6,7)

print(a.sum1("abc",'def'))
print(a.sum1(3,4))

print(b.sum1("Hello","Code","Academy"))
print(b.sum1(10,20,30))

def sum1(arg1, arg2):
    if type(arg1) == str and type(arg2) == str:
        result = arg1 + " " + arg2
        return result
    elif type(arg1) == str and type(arg2) == int:
        return arg1*arg2
    elif type(arg1) == int and type(arg2) == str:
        return arg1*arg2
    else:
        return arg1+arg2


print(sum1(12, 16))
print(sum1("Hello","world"))
print(sum1("hi",3))






