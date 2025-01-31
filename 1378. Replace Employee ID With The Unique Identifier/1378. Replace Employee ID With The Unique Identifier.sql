SELECT l.unique_id, e.name
FROM  Employees e
LEFT JOIN EmployeeUNI l ON e.id = l.id;