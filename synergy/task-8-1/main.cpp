#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    char gender;
    double weight;

public:
    Person(string name, int age, char gender, double weight) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->weight = weight;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    char getGender() {
        return gender;
    }

    double getWeight() {
        return weight;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setWeight(double weight) {
        this->weight = weight;
    }
};

class Student : public Person {
private:
    int year_of_study;

public:
    Student(string name, int age, char gender, double weight, int year_of_study) : Person(name, age, gender, weight) {
        this->year_of_study = year_of_study;
    }

    int getYearOfStudy() {
        return year_of_study;
    }

    void setYearOfStudy(int year_of_study) {
        this->year_of_study = year_of_study;
    }
};

class Pass {
protected:
    string pass_type;

public:
    Pass(string pass_type) {
        this->pass_type = pass_type;
    }

    string getPassType() {
        return pass_type;
    }

    void setPassType(string pass_type) {
        this->pass_type = pass_type;
    }

    virtual double getDiscountPercentage() = 0;
};

class TeacherPass : public Pass {
private:
    double discount_percentage;

public:
    TeacherPass(string pass_type, double discount_percentage) : Pass(pass_type) {
        this->discount_percentage = discount_percentage;
    }

    double getDiscountPercentage() {
        return discount_percentage;
    }
};

class StudentPass : public Pass {
private:
    bool access_to_buildings;

public:
    StudentPass(string pass_type, bool access_to_buildings) : Pass(pass_type) {
        this->access_to_buildings = access_to_buildings;
    }

    bool getAccessToBuildings() {
        return access_to_buildings;
    }

    void setAccessToBuildings(bool access_to_buildings) {
        this->access_to_buildings = access_to_buildings;
    }

    virtual double getDiscountPercentage() {
        return 0.1; // 10% discount for all students
    }
};

int main() {
    // Create a student and a teacher
    Student s("John", 20, 'M', 70.5, 2);
    Person t("Mary", 40, 'F', 65.0);

    // Create passes for the student and teacher
    TeacherPass teacher_pass("Teacher Pass", 0.2); // 20% discount for teachers
    StudentPass student_pass("Student Pass", true); // Students have access to buildings

    // Get and set pass type and discount percentage for teacher pass
    cout << "Teacher Pass Type: " << teacher_pass.getPassType() << endl;
    cout << "Teacher Pass Discount Percentage: " << teacher_pass.getDiscountPercentage() << endl;
    teacher_pass.setPassType("Faculty Pass");
    cout << "Teacher Pass Type: " << teacher_pass.getPassType() << endl;

    // Get and set pass type and access to buildings for student pass
    cout << "Student Pass Type: " << student_pass.getPassType() << endl;
    cout << "Student Pass Access to Buildings: " << student_pass.getAccessToBuildings() << endl;
    student_pass.setPassType("Undergraduate Pass");
    student_pass.setAccessToBuildings(false);
    cout << "Student Pass Type: " << student_pass.getPassType() << endl;
    cout << "Student Pass Access to Buildings: " << student_pass.getAccessToBuildings() << endl;

    // Get discounts for the student and teacher passes
    cout << "Student Discount Percentage: " << student_pass.getDiscountPercentage() << endl;
    cout << "Teacher Discount Percentage: " << teacher_pass.getDiscountPercentage() << endl;

    return 0;
}