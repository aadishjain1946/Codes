import java.util.*;

public class test {

  // test circle class to store circle information
  public static class TestCircle {

    private double radius;

    //constructor to initialize object
    public TestCircle() {
      this.radius = 0;
    }

    //setter function to set radius of a circle
    public void setRadius(double radius) {
      this.radius = radius;
    }

    //getter function to get radius of a circle
    public double getRadius() {
      return this.radius;
    }
  }

  public static void main(String[] args) {
    //creating 3 circle object
    TestCircle circle1 = new TestCircle();
    circle1.setRadius(2.5);
    TestCircle circle2 = new TestCircle();
    circle2.setRadius(300);
    TestCircle circle3 = new TestCircle();
    //printing radius of circle object
    System.out.println("Radius of circle1 is " + circle1.getRadius());
    System.out.println("Radius of circle2 is " + circle2.getRadius());
    System.out.println("Radius of circle3 is " + circle3.getRadius());
  }
}
