import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class sketch_31robotArm extends PApplet {

float angle = 0.0f;
float angleDirection = 1;
float speed = 0.005f;

public void setup() {
  
}

public void draw() {
  background(204);
  translate(width/4, width/4); // Move to start position
  rotate(angle);
  strokeWeight(width/16);
  line(0, 0, width/4, 0);
  translate(width/4, 0);  // Move to next joint
  rotate(angle * 2.0f);
  strokeWeight(width/32);
  line(0, 0, width/8, 0);
  translate(width/8, 0);  // Move to next joint
  rotate(angle * 2.5f);
  strokeWeight(width/64);
  line(0, 0, width/16, 0);
  angle += speed * angleDirection;
  if ((angle > QUARTER_PI) || (angle < 0)) {
    angleDirection = -angleDirection;
  }
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_31robotArm" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
