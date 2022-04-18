import java.util.*;
public class test {
	static class Rectangle{
		int length, breadth;
		Rectangle(int l, int b){
			this.length = l;
			this.breadth = b;
		}
		int areaOfRectangle(){
			return length*breadth;
		}
	}
	static class Square{
		int side;
		Square(){
			this.side = 10;
		}
		static int areaOfSquare(int side){
			return side*side;
		}
	}
	public static void main(String argc[])
	{
		Rectangle r1 = new Rectangle(4,5);
		Square s1 = new Square();
		System.out.println("Area of square: " + s1.areaOfSquare(s1.side));
		System.out.println("Area of rectangle: " + r1.areaOfRectangle());
	}
}
