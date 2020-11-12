# INTRODUCTION

Throughout your career in software development, you will develop and maintain new and existing applications. You will be expected to fix issues as well as add new enhancements or migrate existing applications to new platforms or different programming languages. As a software developer, your role will be to create a design of an application based on given business requirements. After the design is completed, you must implement the application based on the design document and provided requirements.

  

In this assessment, you will create a C++ application based on the scenario below. The skills you demonstrate in your completed application will be useful in responding to technical interview questions for future employment. This application may also be added to your portfolio to show to future employers.

  

_This project will require an integrated development environment (IDE). You must use either Visual Studio or Xcode for this assessment. Directions for accessing these IDEs can be found in the attached “IDE Instructions.”_

  

_Your submission should include a zip file with all the necessary code files to compile, support, and run your application. The zip file submission must also keep the project file and folder structure intact for the Visual Studio IDE or Eclipse IDE._


# SCENARIO

You are hired as a contractor to help a university migrate an existing student system to a new platform using C++ language. Since the application already exists, its requirements exist as well, and they are outlined in the next section. You are responsible for implementing the part of the system based on these requirements. A list of data is provided as part of these requirements. This part of the system is responsible for reading and manipulating the provided data.

  

You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.

**studentData Table**
| Student ID | First Name      | Last Name      | Email                    | Age      | Days in Course                       | Degree Program |
|------------|-----------------|----------------|--------------------------|----------|--------------------------------------|----------------|
| A1         | John            | Smith          | John1989@gm ail.com      | 20       | 30, 35, 40                           | SECURITY       |
| A2         | Suzan           | Erickson       | Erickson_1990@gmailcom   | 19       | 50, 30, 40                           | NETWORK        |
| A3         | Jack            | Napoli         | The_lawyer99yahoo.com    | 19       | 20, 40, 33                           | SOFTWARE       |
| A4         | Erin            | Black          | Erin.black@comcast.net   | 22       | 50, 58, 40                           | SECURITY       |
| A5         | Your first name | Your last name | Your valid email address | Your age | Number of days to complete 3 courses | SOFTWARE       |

The data should be input as follows:

    const string studentData[] =
    
    {"A1,John,Smith,John1989@gm  [ail.com](http://ail.com/),20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,[Erin.black@comcast.net](mailto:Erin.black@comcast.net),22,50,58,40,SECURITY", "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"

You may not include third-party libraries. Your submission should include one zip file with all the necessary code files to compile, support, and run your application. You must also provide evidence of the program’s required functionality by taking a screen capture of the console run, saved as an image file.  
  

_Note: Each file must be an attachment no larger than 30 MB in size._

REQUIREMENTS

----------

_Your submission must be your original work. No more than a combined total of 30% of the submission and no more than a 10% match to any one individual source can be directly quoted or closely paraphrased from sources, even if cited correctly. The originality report that is provided when you submit your task can be used as a guide._

  

_You must use the rubric to direct the creation of your submission because it provides detailed criteria that will be used to evaluate your work. Each requirement below may be evaluated by more than one rubric aspect. The rubric aspect titles may contain hyperlinks to relevant portions of the course._

  

_Tasks may **not** be submitted as cloud links, such as links to Google Docs, Google Slides, OneDrive, etc., unless specified in the task requirements. All other submissions must be file types that are uploaded and submitted as attachments (e.g., .docx, .pdf, .ppt)._

  

A. Modify the “studentData Table” to include your personal information as the last item.  

B. Create a C++ project in your integrated development environment (IDE) with the following files:

 - degree.h

- student.h and student.cpp

- roster.h and roster.cpp

- main.cpp  

_Note: There must be a total of six source code files._  

C. Define an enumerated data type _DegreeProgram_ for the degree programs containing the data type values _SECURITY, NETWORK,_ and _SOFTWARE_.  

_Note: This information should be included in the degree.h file._  

D. For the Student class, do the following:

1. Create the class Student in the files student.h and student.cpp, which includes _each_ of the following variables:

- student ID

- first name

- last name

- email address

- age

- array of number of days to complete each course

- degree program

2. Create _each_ of the following functions in the Student class:

- an accessor (i.e., getter) for each instance variable from part D1

b. a mutator (i.e., setter) for each instance variable from part D1

c. All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

d. constructor using _all_ of the input parameters provided in the table

e. print() to print specific student data  

E. Create a Roster class (roster.cpp) by doing the following:

1. Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”

2. Create a student object for _each_ student in the data table and populate classRosterArray.

a. Parse _each_ set of data identified in the “studentData Table.”

b. Add _each_ student object to classRosterArray.

3. Define the following functions:

a. public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.

b. public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.

c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through _all_ the students in classRosterArray and call the print() function for _each_ student.

d. public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.

e. public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.  

_Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ')._  

f. public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.  

F. Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:

1. Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.

2. Create an instance of the Roster class called classRoster.

3. Add _each_ student to classRoster.

4. Convert the following pseudo code to complete the rest of the main() function:

    classRoster.printAll();
    
    classRoster.printInvalidEmails();
    
    //loop through classRosterArray and for each element:
    
    classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    
    classRoster.printByDegreeProgram(SOFTWARE);
    
    classRoster.remove("A3");
    
    classRoster.printAll();
    
    classRoster.remove("A3");
    
    //expected: the above line should print a message saying such a student with this ID was not found.

5. Implement the destructor to release the memory that was allocated dynamically in Roster.  

G. Demonstrate professional communication in the content and presentation of your submission.

