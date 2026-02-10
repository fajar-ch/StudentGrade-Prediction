# StudentGrade-Prediction
Predict student grades (A–F) based on marks using C++ project simulating ML concepts.


## Overview
This project predicts student grades (A-F) based on marks using **C++**
It simulates a **machine learning concept**: using data (marks) to make predictions (grades).  
---

## Research Objective
- Explore predicting student grades using a simple rule-based model.
- Demonstrate data-driven prediction
- Introduce basic ML concepts (data → model → prediction → output) 

---

## Features
- Input student names and marks
- Predict grades (A-F) using threshold logic
- Display predicted grades
- Beginner-friendly, console-based interface
- Ready for research-style experimentation

---

## How ML is Used
| ML Concept        | C++ Implementation |
|------------------|------------------|
| Dataset           | Array of `Student` structs |
| Features          | Marks of students |
| Model             | `predictGrade()` function (rule-based classifier) |
| Prediction        | Assign grade based on marks |
| Evaluation        | Compare predictions with expected output |

---

## Example Input
Enter number of students: 4
Enter name and marks for student 1: Ali 85
Enter name and marks for student 2: Sara 92
Enter name and marks for student 3: Omar 67
Enter name and marks for student 4: Ayesha 78


## Example Output

Predicted Grades:
Ali - 85 marks -> Grade: B
Sara - 92 marks -> Grade: A
Omar - 67 marks -> Grade: D
Ayesha - 78 marks -> Grade: C



## How to Run
1. Clone the repository:
git clone https://github.com/YOUR-USERNAME/StudentGrade-Prediction.git

2. Open `main.cpp` in any C++ compiler (Dev C++, Visual Studio, etc.)  
3. Compile and run  
4. Enter student names and marks as prompted  

---

## Future Work
- Extend to multiple subjects with weighted averages  
- Add statistical evaluation of class performance  
- Simulate prediction improvement over time  
- Optional CSV input/output for larger datasets  

---

## Author
Fajar Ch  
BS Computer Science, 4th Semester  
Skills: C++, HTML, CSS, Basic UX/UI Design
