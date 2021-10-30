import java.util.*;
public class test
{
	public static enum Level{
		LOW(0,30),
		MEDIUM(30,60),
		HIGH(60,Integer.MAX_VALUE);
		public int maxVal,minVal;
		private Level(int minVal,int maxVal){
			this.minVal = minVal;
			this.maxVal = maxVal;
		}
		public static Level getLevel(int n){
			for(Level v : values())
            {
				if(n <= v.maxVal && n >= v.minVal) return v;
			}
			return null;
		}
	}
	public static void main(String[] args)
	{
		Level l1 = Level.getLevel(35);
		System.out.println(l1);
		Level l2 = Level.getLevel(25);
		System.out.println(l2);
		Level l3 = Level.getLevel(95);
		System.out.println(l3);
	}
}
