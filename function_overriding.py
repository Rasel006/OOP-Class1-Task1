class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
    
    def eat(self):
        print('vat mangso polau kormaa')

    def exercise(self):
        raise NotImplementedError

class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)
        
    def eat(self):
        print('Vegetables and fruits')

    def exercise(self):
        print('Going to the gym and exercising')

sakib = Cricketer('Sakib', 30, 5, 60, 'BD')


sakib.eat()  
sakib.exercise()  