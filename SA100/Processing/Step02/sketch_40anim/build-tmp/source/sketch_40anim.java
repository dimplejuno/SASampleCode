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

public class sketch_40anim extends PApplet {

float angle = 0.0f;
float offset = 400;
float scalar = 100;
float speed = 0.05f;

public void setup() {
  
}

public void draw() {
  background(0);
  float y1 = offset + sin(angle) * scalar;
  float y2 = offset + sin(angle + 0.4f) * scalar;
  float y3 = offset + sin(angle + 0.8f) * scalar;
  ellipse(320, y1, 40, 40);
  ellipse(400, y2, 40, 40);
  ellipse(480, y3, 40, 40);
  angle += speed;
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_40anim" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
