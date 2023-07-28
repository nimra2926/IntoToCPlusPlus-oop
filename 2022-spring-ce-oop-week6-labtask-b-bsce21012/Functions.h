//
// Created by Lenovo on 4/14/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_B_BSCE21012_FUNCTIONS_H


class staff {
public:
    int salary;                                                                         //making public variables
    void base_public();                                                                 //making public function
};

class department : public staff {
public:
    void setSalary(int number);                                                         //making public function
};
class member : public department{
public:
    void base_public();                                                                 //making public functions
    int getSalary();
};


#endif //INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_B_BSCE21012_FUNCTIONS_H
