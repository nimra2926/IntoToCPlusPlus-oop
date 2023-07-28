print("Hello World")
class Salary:                                                         #class Salary is made 
    __salary = 0

    def __init__(self, Salary_s):                                         #parameterized constructor is made
        self.__salary = Salary_s

    def get_annual_salary(self):
        total_salary = self.__salary * 12
        return total_salary


class Employee:                                                        #class Employee is made
    __salary = 0
    __bonus = 0

    def __init__(self,Salary_s,bonus_b):                         #parameterized constructor is made
        self.__salary = Salary_s
        self.__bonus=bonus_b
        self.obj=Salary(self.__salary)                            #composition is done

    def salary_with_bonus(self):
        total_salary = self.__salary * 12
        total_salary = total_salary + self.__bonus
        print("Salary without bonus:",self.obj.get_annual_salary())
        return total_salary

salary_s=int(input("Enter SALARY : "))
bonus_b=int(input("Enter BONUS : "))
obj_2 = Employee(salary_s,bonus_b)
print("Total salary with bonus:", obj_2.salary_with_bonus())
