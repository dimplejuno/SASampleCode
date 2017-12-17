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

public class sketch_22setup_draw2 extends PApplet {

int radius = 80;
float x = -radius;
float speed = 5.0f; 

public void setup() {
  
  ellipseMode(RADIUS);
}

public void draw() {
  background(255, 0, 127);
  //x += speed; // Increase the value of x
  x = x + speed;
  if (x > width+radius) { // If the shape is off screen,
    //x = -radius; // move to the left edge
    speed = -speed;
  }
  arc(x, height/2, radius, radius, 0.52f, 5.76f);
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_22setup_draw2" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
