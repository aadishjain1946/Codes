import java.util.*;
public class test {
	public static class AddOneToArrayList{
		public static ArrayList<Integer> solution(ArrayList<Integer> list){
			// ↓↓↓↓ your code goes here ↓↓↓↓
			int carry = 1;
			for(int i = 2; i > 0; i--){
				int sum = list.get(i) + carry;
				carry = sum /10;
				list.set(i, sum % 10);
			}
			if(carry > 0){
				list.add(0,carry);
			}
			return list;
		}
	}
	public static void main(String argc[])
	{
		ArrayList<Integer> list = new ArrayList<Integer>();
		Scanner scnObj = new Scanner(System.in);
		for(int i = 0; i < 3; i++){
			list.add(scnObj.nextInt());
		}
		AddOneToArrayList.solution(list);
	}
}
