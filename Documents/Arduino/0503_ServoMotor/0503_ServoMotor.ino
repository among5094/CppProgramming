//작성자 노혜민 -> 서브모터 사용해보기
//시작전에 닫고 있다가 
#include <Servo.h> //서브모터를 쓰기 위한 라이브러리 추가
Servo servo; //Servo 클래스로 servo객체 생성
int value=0; // 각도 조절을 위한 변수 value

void setup() {

  servo.attach(7); //멤버 함수인 attach:핀 설정
  Serial.begin(9600); //시리얼 모니터 사용하기 위한 선언
}

void loop() {

  if(Serial.available())//시리얼 모니터에 데이터가 입력되면 
  {
    char in_data; //입력된 데이터를 담을 변수
    in_data=Serial.read(); //시리얼 모니터로 입력된 데이터 in_data로 저장
    
    if(in_data=='1') //입력된 데이터가 1이면?
    {
      value = value + 180; //각도를 30도 증가

      //180도가 넘으면 각도를 0으로 초기화해주기 위한 역할
      if(value == 180) //각도가 180도가 되면?
      {
        value=0; //0으로 초기화
      }
      else //그 외의 데이터가 입력되면
        value =0; //각도를 0으로 초기화

    }
      servo.write(value); //value값의 각ㄷ로 회전 
    
  }//시리얼 모니터에 데이터가 입력되면에 대한 닫기
  
}//void loop문 닫기
