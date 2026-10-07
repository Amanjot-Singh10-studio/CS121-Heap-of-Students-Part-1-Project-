# CS121-Heap-of-Students-Part-1-Project
## UML Class Diagram 
```mermaid
classDiagram
    class Address {
        - string street
        - string city
        - string state
        - string zip
        + Address()
        + void init(street, city, state,zip)
        + void PrintAddress()
    }

    class Date {
        - string dateString
        - int month 
        - int day
        - int year
        + Date() 
        + void init(dateString)
        + void printDate() 
    }

    class Student {
        - string studentString
        - string firstName
        - string lastName
        - Date* dob
        - Date* expectedGrad
        - Address* address
        - int CreditHours
        + Student()
        + ~Student()
        + void init(studentString)
        + void printStudent()
        + string getFirstName()
        + string getLastName()
        + string getLastFrist()
        + int getCreditHours() 
    }

    Student *-- Address 
    Student *-- Date  
