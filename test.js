`INSERT 
    INTO CLIENT 
        (Client_no, Client_Name, Address, Order_Date)
    VALUES 
        ('C100', 'DELL', 'AMERICA', '05-05-2018'), 
        ('C101', 'SANDISK', 'KINGDOM', '10-10-1998'),
        ('C102', 'SAMSUNG', 'KOREA', '12-08-2010'),
        ('C103', 'LENOVO', 'JAPAN', '10-07-1998')
`
`INSERT 
    INTO CLIENT_DETAILS
        (Client_no, Order_no, Product, Cost, Quantity, Status)
    VALUES 
        ('C100', 'R001', 'JIOCLASS', 100.40, 3000, 'PROCESSED'), 
        ('C101', 'R002', 'SMARTWATCH', 300.50, 4000, 'DELIVERED'),
        ('C102', 'R001', 'SPYCAMERA', 600.10, 2000, 'PROCESSED'),
        ('C103', 'R003', 'IROBOT', NULL, 4000, 'DELIVERED'),
        ('C104', 'R002', 'RADAR', 500.00, 400, 'PROCESSED')
`