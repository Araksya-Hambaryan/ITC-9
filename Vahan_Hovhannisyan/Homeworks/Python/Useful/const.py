class object:
    pass

class A(object):
    def __init__(self):
        super(A,self).__init__()
        print ("A")

class B(A):
    def __init__(self):
        super(B,self).__init__()
        print ("B")

class C(object):
    def __init__(self):
        super(C,self).__init__()
        print ("C")

class D(C):
    def __init__(self):
        super(D,self).__init__()
        print ("D")

class E(B,D):
    def __init__(self):
     super(E,self).__init__()
     print ("E")

#objE=E()
#objE
print(E.__mro__)

