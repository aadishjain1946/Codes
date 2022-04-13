import java.util.*;
public class test {
	public static int random(){
		return (int)(Math.random() * ((9 - 1) + 1)) + 1;
	}
	public static void main(String argc[])
	{
		int a = random();
		int b = random();
		int var1 = (a > b)? a: b;
		System.out.println("Var1: " + var1);
	}
}
