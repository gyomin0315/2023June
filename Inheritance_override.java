package myPackage;

public class Inheritance_override {
	

}


class Parent
{
	String name;
	
	Parent(String name)
	{
		this.name = name;
	}
	
	
	
}



class Child extends Parent 
{
	Child(String name)
	{
		super(name);
	}
}



// 부모 클래스의 생성자에 매개변수가 있는 경우 자식 클래스의 생성자에서 반드시 super()로 부모 생성자를 실행해줘야 한다. 

// 부모 클래스인 Parent는 기본 생성자가 없고, 문자열을 매개변수로 받는 생성자만 존재한다. name을 매개변수로 넘겨줘야만 객체를 생성할 수 있음. 부모 클래스의 객체가 먼저 생성되어야 하므로, Child에서 부모 생성자를 실행해줘야 한다.

// 메소드 재정의

// 부모 클래스의 메소드를 자식 클래스가 변경해서 정의하는 것을 메소드 재정의(override) 라고 한다. 동일 이름의 메소드를 자식 클래스가 생성했다면, 자식클래스의 메소드가 부모클래스보다 우선 적용됨. 

// override가 가능하려면, 부모클래스와 자식 클래스의 메소드 선언부가 동일해야하고, 자식 클래스의 메소드의 범위가 부모클래스보다 커야함. 

