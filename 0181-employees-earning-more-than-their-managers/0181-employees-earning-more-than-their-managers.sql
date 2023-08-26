# Write your MySQL query statement below
# select Name as Employee from Employee e where salary > (select salary from Employee m where e.managerId = m.id);

SELECT Name as Employee FROM Employee e
WHERE Salary > (
    Select Salary FROM Employee m WHERE m.Id = e.ManagerId
)
