package myPackage;



public class Class_final {
	
	static final double CARD = 1.5; // 상수의 위치는 class안, main 밖에서 선언해줘야함. 
	
	public static void main(String args[])
	{
		
		Final f = new Final();
		
		// f.number = 200; 에러.
		
		System.out.println(f.number);
		
		System.out.println("원주율 : " + Math.PI);
		
		System.out.println("카드 수수료율 : " + CARD);
		
		// CARD = 2.0; 에러.
	
		
	}

}

class Final
{
	final int number; // 이제 number는 한번 초기화 되면 다른 값으로 변경 될 수 없음. 
	
	Final()
	{
		number = 100;
	}
	
	
	
}

// final 변수는 다른 값으로 변경 할 수 없는 변수이다. final은 클래스,메소드,변수 앞에 붙일 수 있음. 

// final 클래스와 final 메소드는 나중에 다룸. 

// 자바에서 공유되기 위해 static을, 마지막이기 때문에 final을 붙여 static final로 상수를 정의 할 수 있다. 

// 자바에서도 C와 마찬가지로 상수 표현은 대문자로 함. 

//출력 결과
/*
100
원주율 : 3.141592653589793
카드 수수료율 : 1.5

 */
