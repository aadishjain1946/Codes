import java.util.*;
class student{
	public String name;
}
class GraduateStudent extends student{
	public int age;
	public void printName(){
		System.out.println(name);
	}
}
public class test {
	public static void main(String argc[])
	{
		student A = new GraduateStudent();
		student B = new student();
		GraduateStudent C = (GraduateStudent) A;
		GraduateStudent D = (GraduateStudent) B;
		GraduateStudent E = new GraduateStudent();
		A.printName();
		B.printName();
	}
}
