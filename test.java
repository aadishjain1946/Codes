import java.util.*;
public class test  
{ 
    public static class Student{
        private String studentName;
        private int studentNumber;
        private long regYear;
        private String faculty;
        private String department;
        public String getDepartment(){
            return department;
        }
        public String getFaculty(){
            return faculty;
        }
        public String getStudentName(){
            return studentName;
        }
        public int getStudentNumber(){
            return studentNumber;
        }
        public long getRegYear(){
            return regYear;
        }
        public void setRegYear(long regYear){
            this.regYear = regYear;
        }
        public void setStudentNumber(int studentNumber){
            this.studentNumber = studentNumber;
        }
        public void setDepartment(String department){
            this.department = department;
        }
        public void setFaculty(String faculty){
            this.faculty = faculty;
        }
        public void setStudentName(String studentName){
            this.studentName = studentName;
        }
        public String toString(){
            String output = studentName + ", " + studentNumber + ", " + faculty;
            return output;
        }
    }
    public static void main(String[] args)  
    {  
        Student s = new Student();
        s.setDepartment("abc");
        s.setFaculty("XYZ");
        s.setRegYear(12121);
        s.setStudentName("John");
        s.setStudentNumber(423);
        System.out.println(s.toString());
    }  
}  
