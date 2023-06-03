package myPackage;


// 아래 클래스는 부모 클래스
public class Inheritance_class {
	
	
	String name;
	String color;
	String company;
	
	void call()
	{
		System.out.println("전화걸기");
		
	}
	
	void receive()
	{
		System.out.println("전화받기");
		
	}
	
	

}

class smartphone extends Inheritance_class
{
	public void installApp()
	{
		System.out.println("앱 설치");
	}
}

// 이미 만들어져 있는 클래스로 상속을 해주는 클래스를 부모 클래스, 부모 클래스로부터 기존 변수나 메소드들을 그대로 물려받는 클래스를 자식 클래스라고 한다. 

// 많이 사용할 만한 부모 클래스를 미리 만들어 둔 것이 프레임워크나 라이브러리 등이다. 프레임워크 = 프로그램의 뼈대 라고 생각. 

// 상속을 정의할 때 extends 키워드를 사용한다. 물려받는것 외에 추가로 확장 가능.

// class 자식클래스 extends 부모클래스 { }

// 모든 클래스의 가장 상위 클래스는 object 클래스이다. 
