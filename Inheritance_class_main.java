package myPackage;



public class Inheritance_class_main {
	
	public static void main(String args[])
	{
	 
		Inheritance_class i = new Inheritance_class();
		
		i.name = "전화기";
		i.company = "삼성";
		i.color = "화이트";
		
		System.out.println("phone 출력");
		System.out.println(i.name);
		System.out.println(i.company);
		System.out.println(i.color);
		
		i.call();
		i.receive();
		
		// smartphone class에서는 name, company, color와 같은 필드 없었던것에 주의. 부모 클래스로부터 상속 받았기 때문에 필드 가질수 있었음. 
		smartphone sp = new smartphone();
		sp.name = "갤럭시";
		sp.company = "삼성";
		sp.color = "블랙";
		
		System.out.println("smartphone 출력");
		System.out.println(sp.name);
		System.out.println(sp.name);
		System.out.println(sp.name);
		
		sp.call();
		sp.receive();
		sp.installApp();
		
		
		
		
	}

}

//출력 결과
/*
phone 출력
전화기
삼성
화이트
전화걸기
전화받기
smartphone 출력
갤럭시
갤럭시
갤럭시
전화걸기
전화받기
앱 설치

 */
