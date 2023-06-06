package myPackage;

public class Inheritance_polymorphism_child extends Inheritance_polymorphism{
	
	String name;
	
	// 메소드 재정의
	
	void run()
	{
		System.out.println("자식이 달린다.");
	}
	
	// 새로 메소드 추가
	
	void eat()
	{
		System.out.println("자식이 먹는다.");
	}

}
