# C++ Module 05 - Ex03: Bureaucrat, Forms, and Interns

## Project Overview

The Ex03 project extends the bureaucratic system developed in Ex01 and Ex02, adding an Intern class to the hierarchy. This system models a bureaucratic organization with bureaucrats, forms, and now interns who can create forms.

## Class Structure

### 1. Bureaucrat Class
A basic class representing bureaucrats with grades (1 to 150).

**Key Features:**
- Grade range: 1 (highest) to 150 (lowest)
- Can sign forms if their grade is high enough
- Can execute forms if their grade is high enough
- Custom exception classes for grade validation

### 2. AForm Class (Abstract)
An abstract base class representing bureaucratic forms.

**Key Features:**
- Name and grade requirements (for signing and execution)
- Signed status tracking (signed or not)
- Abstract `execute()` method for derived classes
- Exception classes for validation

### 3. Concrete Form Classes
Three specialized form types that inherit from AForm:

#### ShrubberyCreationForm
- Creates ASCII trees in a file named `<target>_shrubbery`
- Sign grade: 145
- Execute grade: 137

#### RobotomyRequestForm
- Attempts to robotomize the target with 50% success rate
- Makes drilling noises
- Sign grade: 72
- Execute grade: 45

#### PresidentialPardonForm
- Informs that the target has been pardoned by Zaphod Beeblebrox
- Sign grade: 25
- Execute grade: 5

### 4. Intern Class
Represents an intern who can create any form type when asked.

**Key Features:**
- `makeForm()` method creates forms based on name and target
- Handles three form types: "shrubbery creation", "robotomy request", "presidential pardon"
- Case-insensitive form name matching
- Returns `NULL` if the requested form doesn't exist

## How to Build

```zsh
cd /home/abueskander/CPP_modules_42/CPP05/ex03
make
```

## How to Run

```zsh
./Intern
```

## Code Example

```cpp
int main() {
    // Create an Intern
    Intern someRandomIntern;
    
    // The intern creates a form
    AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    
    // Create a Bureaucrat
    Bureaucrat boss("Boss", 1);
    
    // Boss signs and executes the form
    if (rrf) {
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf; // Don't forget to clean up!
    }
    
    // Try creating a nonexistent form
    AForm* nonExistent = someRandomIntern.makeForm("travel permit", "John");
    if (!nonExistent) {
        std::cout << "Form creation failed as expected" << std::endl;
    }
    
    return 0;
}
```

## Key Concepts

1. **Inheritance**: Abstract forms and concrete implementations
2. **Polymorphism**: Using base class pointers to different derived types
3. **Exception Handling**: Grade validation and form execution requirements
4. **Factory Pattern**: Intern creates appropriate forms based on names
5. **Resource Management**: Dynamic memory allocation and cleanup
6. **File Operations**: Creating and writing to files (ShrubberyCreationForm)

## Project Structure

- `models/`: Core class implementations
- `includes/`: Utility header files
- `src/`: Main application code
- `Makefile`: Build configuration

## Design Patterns Used

1. **Factory Pattern**: The Intern class acts as a factory for creating different form types
2. **Template Method Pattern**: Abstract form with concrete implementations
3. **Command Pattern**: Forms represent executable commands

## Error Handling

The system includes robust error handling through custom exceptions:
- GradeTooHighException
- GradeTooLowException
- FormNotSignedException

These exceptions ensure that all operations follow the bureaucratic rules of the system.
