import java.util.*;
public class test {
    static class Customer{
        private int  id;
        private String  name;
        private String  dob;
        private double  salary;
        private String  email;
        private int  age;
        Customer(int id, String name, String dob, double salary, String email, int age){
            this.id = id;
            this.name = name;
            this.dob = dob;
            this.salary = salary;
            this.email = email;
            this.age = age;
        }
        int getId(){
            return this.id;
        }
    }
    static class comparatorHelper implements Comparator<Customer>
    {
    
        public int compare(Customer c1, Customer c2)
        {
            return c1.getId()-c2.getId();
        }
    }
    static TreeSet<Customer> sortCustomerOnId(Customer []custList){
        TreeSet<Customer> custSet = new TreeSet<>(new comparatorHelper());
        for(int i = 0;i<custList.length;i++){
            custSet.add(custList[i]);
        }
        return custSet;
    }
    public static void main(String[] args)
    {
        Customer c1[] = {new Customer(5,"Abc","5/1/11",54000,"e@a.com",23),
                         new Customer(2,"DEF","2/1/11",54000,"b@a.com",24),
                         new Customer(1,"GHI","1/1/11",54000,"a@a.com",25),
                         new Customer(4,"JKL","4/1/11",54000,"d@a.com",26),
                         new Customer(3,"LMN","2/1/11",54000,"c@a.com",27)};
        TreeSet<Customer> t1 = sortCustomerOnId(c1);
        System.out.println("Id of customer in TreeSet element:");
        for(Customer ele: t1)
        {
            System.out.println(ele.getId());
        }
    }

}