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

public class sketch_39pacman3 extends PApplet {

int radius = 40;
float x = 110;
float speed = 4.0f;
int direction = 1;

public void setup() {
  
  
  ellipseMode(RADIUS);

}

public void draw() {
  background(0);
  x += speed * direction;
  if ((x > width-radius) || (x < radius)) {
    direction = -direction; // Flip direction
  }
  if (direction == 1) {
    arc(x, height/2, radius, radius, 0.52f, 5.76f); // Face right
  } else {
    arc(x, height/2, radius, radius, 3.67f, 8.9f); // Face left
  }
}
  public void settings() {  size(800, 800);  smooth(2); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_39pacman3" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
