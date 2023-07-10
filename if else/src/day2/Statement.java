package day2;

public class Statement {

	public static void main(String[] args) {
	
		Statement s = new Statement();
		s.test();

	}

	private void test() {
		int no1 = 50;
		int no2 = 60;
		if (no1>no2)
		{
			System.out.println(no1);
		}
		else if (no2>no1)
		{
			System.out.println(no2);
		}
		
		
	}

}