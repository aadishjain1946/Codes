`
SELECT
    t1.FirstName, t1.LastName
FROM
    Table_Employee t1
JOIN
    Table_Order t2
    ON(t1.EmployeeID = t2.EmployeeID)
WHERE
    t2.OrderQty > 10
`