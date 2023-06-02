package myPackage;

public class Class_exercise {
	
	public static void main(String args[])
	{
		
		String number = "123";
		
		System.out.println("출력값 : " + add(number));
		
		Excercise ex1 = Excercise.getInstance();
		
		Excercise ex2 = Excercise.getInstance();
		
		System.out.println("ex1 == ex2 : " + (ex1 == ex2));
		
		// 클래스명 : Math, 메서드명 : max,min 으로 설정하고 메서드 호출해볼 것.
		
		int arr[] = {9,5,24,13,3,21};
		
		Math m = new Math();
		
		int max = m.max(arr);
		int min = m.min(arr);
		
		System.out.println("최댓값 : " + max);
		
		System.out.println("최솟값 : " + min);
		
		
		
		
	}
	
	public static String add(String number)
	{
		return number + "456";
		
	}


}

class Math
{
	public static int max(int arr[])
	{
		int result =0;
		for(int i=0;i<arr.length;i++)
		{
			
			
			if(arr[i]>result)
			{
				result = arr[i];
			}
		}
		return result;
	}
	
	public static int min(int arr[])
	{
		int result =arr[0];
		for(int i=0;i<arr.length;i++)
		{
			
			
			if(arr[i]<result)
			{
				result = arr[i];
			}
		}
		return result;
	}
	
}

class Excercise
{
	private static Excercise instance = new Excercise();
	
	private Excercise()
	{
		System.out.println("객체 생성");
		
	}
	
	public static Excercise getInstance()
	{
		System.out.println("객체 리턴");
		return instance;
	}
	
	
}

class Person
{
	
	// 아래와 같은 필드를 갖는 Person 클래스.
	String name = "구교민";
	String gender = "남";
	int age = 25;
	int height = 170;
	int weight = 69;
			

}

// 중첩된 메서드는 스택처럼 FILO 의 순서로 진행됨.

//출력 결과
/*
출력값 : 123456
객체 생성
객체 리턴
객체 리턴
ex1 == ex2 : true
최댓값 : 24
최솟값 : 3

 */



