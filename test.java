import java.util.*;

public class test {

  //product class to store product data
  public static class product {

    public String productName;
    public int price;

    //constructor to initialize product object
    product(String productName, int price) {
      this.productName = productName;
      this.price = price;
    }

    //function to return name of product
    String getProductName() {
      return this.productName;
    }

    //function to return price of product after calculating total price
    double getProductPrice() {
      double ans = this.price;
      if (ans > 10000) {
        ans -= ans * 0.05;
      }
      double vat = ans * 0.14;
      return ans + vat;
    }
  }

  public static void main(String args[]) {
    Scanner scnObj = new Scanner(System.in);
    //prompt user to enter product name and product price
    System.out.println("INPUT");
    System.out.print("Enter Product Name: ");
    String name = scnObj.nextLine();
    System.out.print("Enter Product Price: ");
    int price = scnObj.nextInt();

    //creating new product object
    product prd1 = new product(name, price);
    
    //printing output to screen
    System.out.println("\nOUTPUT");
    System.out.println("Product Name: " + prd1.getProductName());
    System.out.println(
      "Product Price including VAT: " + prd1.getProductPrice()
    );
  }
}
