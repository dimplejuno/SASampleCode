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

public class sketch_37pacman extends PApplet {

int radius = 40;
float x = -radius;
float speed = 2.0f;

public void setup() {
  
  ellipseMode(RADIUS);
}

public void draw() {
  background(0);
  x += speed; // Increase the value of x
  arc(x, height/2, radius, radius, 0.52f, 5.76f);
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_37pacman" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
