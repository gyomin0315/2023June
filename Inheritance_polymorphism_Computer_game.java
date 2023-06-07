package myPackage;

public class Inheritance_polymorphism_Computer_game {
	
	
	public static void main(String args[])
	{
		Inheritance_polymorphism_Game game = new Inheritance_polymorphism_Game();
		
		
		
		
		Inheritance_polymorphism_GraphicCard g = new Inheritance_polymorphism_GraphicCard();
		
		g.process(); // 얘는 원래 그래픽 카드 process
		
		game.display(g);
		
		allObject(g);
		
		g = new Inheritance_polymorphism_Amd(); // 자식 클래스형태로 재정의
		
		g.process();
		
		game.display(g);
		
		allObject(g);
		
		g = new Inheritance_polymorphism_Nvidia();
		
		g.process();
		
		game.display(g);
		
		allObject(g);
		
		

	}
	
	public static void allObject(Object obj)
	{
		System.out.println(obj.toString());
	}

}


//출력 결과
/*
그래픽 처리
그래픽 처리
myPackage.Inheritance_polymorphism_GraphicCard@5e91993f
AMD 그래픽 처리
AMD 그래픽 처리
myPackage.Inheritance_polymorphism_Amd@379619aa
Nvidia 그래픽 처리
Nvidia 그래픽 처리
myPackage.Inheritance_polymorphism_Nvidia@5e265ba4

*/

// 모두 Game 클래스의 display() 메소드를 사용하고 있지만, GraphicCard, Amd, Nvidia 어떤 객체가 와도 정상적으로 실행된다. 

// 매개변수도 변수이기 때문에, 메소드를 호출할때 매개변수는 GraphicCard 클래스의 하위 클래스들이 자동형변환이 일어난 것이다.

// 즉, GraphicCard g = new Amd(); , GraphicCard g = new Nvidia(); 이런 식으로 자동 형변환 일어난거임. 

// 모든 클래스를 매개변수로 받고 싶으면, 메소드를 정의할 때 매개변수 자료형을 Object로 선언하면 됨. (Object는 모든 클래스의 최상위 클래스 !)

// Object 출력 부분 제대로 나오게 하려면 각 클래스에서 toString 메소드 재정의하면 됨. 

/*
public String toString()
{
    return "Nvidia";
}
위와 같이 toString 메소드 재정의 .
 */
