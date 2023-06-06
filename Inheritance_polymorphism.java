package myPackage;

public class Inheritance_polymorphism {
	
	String name;
	
	void walk()
	{
		System.out.println("부모가 걷는다.");
	}
	
	void run()
	{
		System.out.println("부모가 달린다.");
	}
	

}

// 다형성 : 하위클래스 객체를 상위 클래스 자료형으로 변환이 가능하다.

// 작은 범위의 자료형은 큰 범위의 자료형으로는 자동형변환이 되고, 큰 범위의 자료형을 작은 범위의 자료형으로 변환하려면 강제형변환 해줘야함. 

// 범위가 넓다라는 개념을 상속에서도 적용해보면, 부모 클래스의 범위는 자식 클래스의 범위보다 넓음. 
