class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name 
        self._branch = 'banani 11'  
        self.__balance = initial_deposit  

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance -= amount
            return amount
        else:
            return 'Forkia taka nai'

    
    def get_balance_public(self):
        return self.__balance

rafsun = Bank('Choooto bro', 10000)

print(rafsun.holder_name)
rafsun.holder_name = 'boro vai'
rafsun.deposit(40000)
print(rafsun.get_balance())
print(rafsun.holder_name)

print(rafsun.get_balance_public())
