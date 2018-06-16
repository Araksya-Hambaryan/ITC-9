class A():
    def hola(self):
        print ("A")
class B(A):
    def hola(self):
        print ("B")
class C(A):
    def hola(self):
        print("C")
class D(B,C):
    def hola(self):
        print("D")

#d=D()
#d.hola()

print(D.__mro__)
