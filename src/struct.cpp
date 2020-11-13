#include <bits/stdc++.h>

using namespace std;

struct Person {
    string firstName;
    string lastName;

    string fullName() {
        return firstName + " " + lastName;
    }

    Person(string _firstName, string _lastName) {
        cout << "normal constructor called" << endl;
        firstName = _firstName;
        lastName = _lastName;
    }

    Person(const Person &old) {
        cout << "copy constructor called" << endl;
        firstName = "copy " + old.firstName;
        lastName = "copy " + old.lastName;
    }
};

int main() {
    Person person = Person("Yusuke", "Katsuragawa");
    cout << "person.firstName = " << person.firstName << endl;
    cout << "person.lastName = " << person.lastName << endl;
    cout << "person.fullName = " << person.fullName() << endl;

    Person newPerson = Person(person);
    cout << "newPerson.firstName = " << newPerson.firstName << endl;
    cout << "newPerson.lastName = " << newPerson.lastName << endl;
    cout << "newPerson.fullName = " << newPerson.fullName() << endl;
}