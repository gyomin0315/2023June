package myPackage;

public class Inheritance_polymorphism_main {
	
	public static void main(String args[])
	{
		Inheritance_polymorphism_child c = new Inheritance_polymorphism_child();
		
		c.run();
		
		// 부모클래스의 자료형으로 선언 (자동형변환) => 
		
		Inheritance_polymorphism p = new Inheritance_polymorphism_child(); // 자료형(타입)은 부모인데, 객체는 자식 생성자를 통해 만들어진 자식 객체이다. p는 child 객체이지만, parent 타입으로 변환된 것이다. 이게 다형성
		
		
		p.run(); // 메소드 재정의
		
		//p.eat(); 얘는 에러
		
		
		// 아래는 자식 클래스의 자료형으로 변환 (강제형변환)
		Inheritance_polymorphism_child c2 = (Inheritance_polymorphism_child) p;
		
		c2.eat();
	}

}

//출력 결과
/*
자식이 달린다.
자식이 달린다.
자식이 먹는다.

*/
