package myPackage;

public class Inheritance_super {
	
	
	public static void main(String args[])
	{
		Child child = new Child();
		
		child.print();
		
	}

}

class Parent
{
	
	int number = 3;
	
	Parent()
	{
		System.out.println("부모 객체 생성");
	}
	
	
}

class Child extends Parent
{
	int number =2;
	
	Child()
	{
		System.out.println("자식 객체 생성");
	}
	
	void print()
	{
		int number = 1;
		System.out.println(number); // 메소드내의 지역변수 number
		System.out.println(this.number); // 자기 자신 객체의 number
		System.out.println(super.number); // 부모 객체의 number
		
	}
	
	
}



// super는 자식 객체에서 부모 객체를 가리키는 참좆변수이다.

// super.변수명; , super.메소드명();

// super.를 사용하게 되면 자신이 속한 클래스에서 찾지 않고 상위 클래스에서만 멤버를 찾게 된다.

// super()도 있을 수 있는데, 메소드처럼 사용하고,, 부모 객체의 생성자를 실행할 떄 사용한다.

// this,super모두 static 메소드에서는 사용할 수 없다. 따라서 main() 메소드 내에서도 사용할 수 없다. 

//출력 결과
/*
부모 객체 생성
자식 객체 생성
1
2
3

 */

// Child 객체만 생성했는데, 부모 객체가 먼저 생성된것도 볼 수 있음 !

// 또, Child 클래스의 인스턴스 변수 number가 존재 하지 않는 다면, this.number와 super.number는 동일한 값 가진다. 
