//#ifndef INC_2022_SPRING_CE_OOP_WEEK10_ASSIGNMENT9_BSCE21012_FUNCTIONS_H
//#define INC_2022_SPRING_CE_OOP_WEEK10_ASSIGNMENT9_BSCE21012_FUNCTIONS_H
//
//#include <iostream>
//
//using namespace std;
//
//class person {
//protected:
//    char *name;
//    int age;
//    char *gender;
//    char *education;                                                    //declaring
//    char *language;
//    int size;
//public:
//    person() {
//        age = 0;
//        name = NULL;
//        gender = NULL;                                                      //making it null
//        education = NULL;
//        language = NULL;
//        size = 0;
//    }
//
//    person(int age1) : age(age1) {
//        name = new char[100];
//        gender = new char[100];
//        education = new char[100];                                                   //ellocating memory
//        language = new char[100];
//    }
//
//    person(person &p1) {
//        age = p1.age;
//        size = p1.size;
//        name = new char[100];
//        for (int i = 0; i < '\0'; i++) {
//            name[i] = p1.name[i];
//        }
//        gender = new char[100];
//        for (int i = 0; i < '\0'; i++) {
//            gender[i] = p1.gender[i];
//        }
//        education = new char[100];
//        for (int i = 0; i < '\0'; i++) {
//            education[i] = p1.education[i];
//        }
//        language = new char[100];
//        for (int i = 0; i < '\0'; i++) {
//            language[i] = p1.language[i];
//        }
//
//    }
//
//    void setAge(int age2) {
//        cout << "ENTER AGE = ";
//        cin >> age2;
//        age = age2;
//    }
//
//    int getAge() {
//        return age;
//    }
//
//    void setGender(char *&gender1) {
//        gender1 = new char[100];
//        cout<<"ENTER GENDER = ";
//        cin.ignore();
//        cin.getline(gender1,100);
//        for (int i = 0; i < 100; i++) {
//            gender[i] = gender1[i];
//        }
//
//    }
//
//    char *getGender() {
//        return gender;
//    }
//
//    void setName(char *&name1) {
//        name1 = new char[100];
//        cout<<"ENTER NAME = ";
//        cin.getline(name1,100);
//        for (int i = 0; i < 100; i++) {
//            name[i] = name1[i];
//        }
//        delete[] name1;
//    }
//
//    char *getName() {
//        return name;
//    }
//
//    void setEducation(char *&education1) {
//        education1 = new char[100];
//        cout<<"ENTER EDUCATION = ";
//        cin.getline(education1,100);
//        for (int i = 0; i < 100; i++) {
//            education[i] = education1[i];
//        }
//        delete[] education1;
//
//    }
//
//    char *getEducation() {
//        return education;
//    }
//
//    void setLanguage(char *&language1) {
//        language1 = new char[100];
//        cout<<"ENTER LANGUAGE = ";
//        cin.getline(language1,100);
//        for (int i = 0; i < 100; i++) {
//            language[i] = language1[i];
//        }
//
//        delete[] language1;
//    }
//
//    char *getLanguage() {
//        return language;
//    }
//
//    virtual void display() {
//        cout << "AGE = " << age << endl;
//        int size1;
//        size1=sizeof(name);
//        cout << "NAME = ";
//        for (int i = 0; i < size1; i++) {
//            cout << name[i];
//        }
//        cout<<" ";
//        int size2;
//        size2=sizeof(gender);
//        cout << "GENDER = ";
//        for (int i = 0; i < size2; i++) {
//            cout << gender[i];
//        }
//        cout<<" ";
//        int size3;
//        size3=sizeof(education);
//        cout << "EDUCATION = ";
//        for (int i = 0; i < size3-1; i++) {
//            cout << education[i];
//        }
//        cout<<" ";
//        int size;
//        size=sizeof (language);
//        cout << "LANGUAGE = ";
//        for (int i = 0; i < size; i++) {
//            cout << language[i];
//        }
//        cout<<endl;
//    }
//
//    ~person() {
//        delete[]name;
//        delete[]education;
//        delete[]gender;
//        delete[]language;
//    }
//};
//
//class student:virtual public person{
//protected:
//    float gpa;
//    int semester;
//    char *field;
//public:
//    student(){
//        gpa=0;
//        semester=0;
//        field=NULL;
//    }
//    student(int sem,float Gpa):semester(sem),gpa(Gpa){
//        field=new char[100];
//    }
//    student(student &s1){
//        gpa=s1.gpa;
//        semester=s1.semester;
//        field = new char[100];
//        for (int i = 0; i < '\0'; i++) {
//            field[i] = s1.field[i];
//        }
//    }
//    void setSemester(int sem){
//        cout<<"ENTER SEMESTER = ";
//        cin>>sem;
//        semester=sem;
//    }
//    void setGpa(float Gpa){
//        cout<<"ENTER GPA = ";
//        cin>>Gpa;
//        gpa=Gpa;
//    }
//    void setField(char *f){
//        f=new char[100];
//        cout << "ENTER FIELD = ";
//        cin.ignore();
//        cin.getline(f,100);
//        for(int i=0;i<100;i++){
//            field[i]=f[i];
//        }
//        delete [] f;
//    }
//    int getSemester(){
//        return semester;
//    }
//    float getGpa(){
//        return gpa;
//    }
//    char* getField(){
//        return field;
//    }
//    void display(){
//        cout<<"SEMESTER = "<<semester<<" ";
//        cout<<"GPA = "<<gpa<<" ";
//        int size;
//        cout<<"FIELD = ";
//        size= sizeof(field);
//        for(int i=0;i<size;i++){
//            cout<<field[i];
//        }
//        cout<<endl;
//    }
//    ~student(){
//        delete [] field;
//    }
//
//};
//class employee:virtual public person {
//protected:
//    int salary;
//    char* rank;
//public:
//    employee(){
//        salary=0;
//        rank=NULL;
//    }
//    employee(int s):salary(s){
//        rank= new char[100];
//    }
//    employee(employee &E){
//        salary=E.salary;
//        rank = new char[100];
//        for (int i = 0; i < '\0'; i++) {
//            rank[i] = E.rank[i];
//        }
//    }
//    void setSalary(int s){
//        cout<<"ENTER SALARY = ";
//        cin>>s;
//        salary=s;
//    }
//    int getSalary(){
//        return salary;
//    }
//    void setRank(char *R){
//        R=new char[100];
//        cout << "ENTER RANK = ";
//        cin.ignore();
//        cin.getline(R,100);
//        for(int i=0;i<100;i++){
//            rank[i]=R[i];
//        }
//        delete [] R;
//    }
//
//    char* getRank(){
//        return rank;
//    }
//    void display(){
//        cout<<"SALARY = "<<salary<<" ";
//        int size;
//        size= sizeof(rank);
//        cout<<"RANK = ";
//        for(int i=0;i<size;i++){
//            cout<<rank[i];
//        }
//        cout<<endl;
//    }
//    ~employee(){
//        delete [] rank;
//    }
//};
//class teachingAssistant: public student, public employee {
//public:
//    teachingAssistant(int sem,float Gpa,int s): student(sem,Gpa), employee(s){
//    }
//    void display(){
//        cout<<"\nSALARY = "<<salary<<" ";
//        int size;
//        size= sizeof(rank);
//        for(int i=0;i<size;i++){
//            cout<<rank[i];
//        }
//        int size1;
//        size1= sizeof(field);
//        for(int i=0;i<size1;i++){
//            cout<<field[i];
//        }
//        cout<<endl;
//        cout<<"SEMESTER = "<<semester<<" ";
//        cout<<"GPA = "<<gpa<<" "<<endl;
//    }
//
//};

#endif //INC_2022_SPRING_CE_OOP_WEEK10_ASSIGNMENT9_BSCE21012_FUNCTIONS_H
