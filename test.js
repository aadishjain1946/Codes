`
ANSWER 4:

  SELECT
      PatientName 'Name',
      (SELECT COUNT(*) FROM Appointments ap1  WHERE p.PatientID = app.PatientID) 'Count'
  FROM
      Patients p  
  ORDER BY p.PatientName;

ANSWER 5:

  SELECT
      SUM(tr.Price)
  FROM
      Dentist dt
  JOIN
      Appointments att
  ON (dt.DentistID = att.DentistID)
  JOIN
      Treatments tr
  ON (tr.TreatID = att.TreatmentID)
  WHERE
    dt.DentistName = "david";

ANSWER 6:

  SELECT
      MIN(tr.Price)
  FROM
      Treatments tr;

ANSWER 7:

  INSERT INTO
      Appointments (AppointmentID, PatientID, AppointmentTime, AppointmentDate, TreatmentID, DentistID)
  VALUES (7, "P5", "8:00", "6/12/2021", "T2", "D4");
`