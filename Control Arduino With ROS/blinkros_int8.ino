#include <ros.h>
#include <std_msgs/Int8.h>

ros::NodeHandle  nh;

void messageCb( const std_msgs::Int8& toggle_msg){
 if (toggle_msg.data==4)
 {
  digitalWrite(LED_BUILTIN, HIGH-digitalRead(LED_BUILTIN));   // blink the led
  delay(10);
   digitalWrite(LED_BUILTIN, LOW-digitalRead(LED_BUILTIN));   // blink the led
  

}

}
ros::Subscriber<std_msgs::Int8> sub("chatter", &messageCb );

void setup()
{ 
  pinMode(LED_BUILTIN, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  //delay(10);
}
