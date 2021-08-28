`
    SELECT
        studId as StudentId,
        FirstName as FirstName
    FROM
        STUDENT
    WHERE
        city IN ("Coimbatore" OR "Chennai")
        DOB = "08/10/1997"
    ORDER BY
        studId    
`
