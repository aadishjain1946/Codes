import java.util.*;
public class test  
{ 
    public static void main(String[] args)  
    {  
        System.out.println ("Vendor : " + System.getProperty("java.vendor") );
        System.out.println ("Vendor URL: " + System.getProperty("java.vendor.url") );
        System.out.println("Java version: " + System.getProperty("java.specification.version"));
        System.out.println("Java runtime version: " + System.getProperty("java.version"));
    }  
}  
