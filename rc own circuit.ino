#define inp1 2
#define inp2 4  
#define inp3 6
#define inp4 7
#define ena  3
#define enb  5
char action;

void setup (){
pinMode(inp1,OUTPUT);
pinMode(inp2,OUTPUT);
pinMode(inp3,OUTPUT);
pinMode(inp4,OUTPUT);
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);

Serial.begin(9600);

}

void loop(){
 if(Serial.available()>0){
   
   action=Serial.read();
   
   switch(action){
     
     case 'F' :
      analogWrite(ena,255);
     analogWrite(enb,255);
     digitalWrite(inp1,HIGH);
     digitalWrite(inp2,LOW);
     digitalWrite(inp3,HIGH);
     digitalWrite(inp4,LOW);
     

    break;

    case 'B' :
    analogWrite(ena,255);
    analogWrite(enb,255);
    digitalWrite(inp1,LOW);
    digitalWrite(inp2,HIGH);
    digitalWrite(inp3,LOW);
    digitalWrite(inp4,HIGH);
    break;

    case 'L' :
    analogWrite(ena,255);
    analogWrite(enb,255);
    digitalWrite(inp1,HIGH);
    digitalWrite(inp2,LOW);
    digitalWrite(inp3,LOW);
    digitalWrite(inp4,LOW);

    break;

    case 'R' :
    analogWrite(ena,255);
    analogWrite(enb,255);
    digitalWrite(inp1,LOW);
    digitalWrite(inp2,LOW);
    digitalWrite(inp3,HIGH);
    digitalWrite(inp4,LOW);

    break;
    default:
    printf("circuit is break");
  }
}
}

