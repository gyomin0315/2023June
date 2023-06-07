package myPackage;

public class Inheritance_polymorphism_Computer {
	
	
	public static void main(String args[])
	{
		Inheritance_polymorphism_GraphicCard g = new Inheritance_polymorphism_GraphicCard();
		
		g.process(); // 얘는 원래 그래픽 카드 process
		
		g = new Inheritance_polymorphism_Amd(); // 자식 클래스형태로 재정의
		
		g.process();
		
		g = new Inheritance_polymorphism_Nvidia();
		
		g.process();

	}

}

//출력 결과
/*
그래픽 처리
AMD 그래픽 처리
Nvidia 그래픽 처리

*/
