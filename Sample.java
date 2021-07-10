import java.io.*;
import java.util.*;

public class Sample {

  //file handeling class to read and write text file
  public static class FileHandling {

    public static final String bookPath = "Data\\book.txt";
    public static final String authorPath = "Data\\author.txt";

    //function to write text file with given data
    public static void WriteFile(String data, String path) {
      try {
        BufferedWriter fileObj = new BufferedWriter(new FileWriter(path, true));
        fileObj.write(data);
        fileObj.close();
      } catch (IOException e) {
        System.out.println("Error while writing file." + e);
      }
    }

    //function to read text file and return all the data
    public static String ReadFile(String path) {
      String output = "";
      try {
        BufferedReader fileObj = new BufferedReader(new FileReader(path));

        String mystring;
        while ((mystring = fileObj.readLine()) != null) {
          output += mystring;
          output += "\n";
        }
      } catch (IOException e) {
        System.out.println("Exception Occurred" + e);
      }
      return output;
    }
  }

  public static void main(String[] args) {
    for (int i = 1; i <= 5; i++) {
      FileHandling.WriteFile(
        "Hello this is sample data #" + i + "\n",
        "data.txt"
      );
    }
    System.out.println(
      "Reading Data From text file:\n" + FileHandling.ReadFile("data.txt")
    );
  }
}
