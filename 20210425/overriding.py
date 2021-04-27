#Overriding

class Person:
    def __init__(self,firstName,lastName):
        self.firstName = firstName
        self.lastName = lastName
    
    def printData(self):
        print(self.firstName,self.lastName)

class Student(Person):
    def __init__(self, firstName, lastName, grade):
        super().__init__(firstName, lastName)
        self.grade = grade
        
    def printData(self):
        Person.printData(self)
        print("Grade:",self.grade)

person1 = Student("Tanya","Todorova",4)
person1.printData()

person2 = Person("Pesho","Pesho")
person2.printData()