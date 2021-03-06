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

public class sketch_23setup_draw_ellipse extends PApplet {

int x = 0;
int speed = 10;
public void setup() {
  
}

public void draw() {
  background(255);
  strokeWeight(10);
  stroke(255, 0, 0);
  if(x > 380 && x < 420) {
  	line(400,0,400,height);
  }

  strokeWeight(2);
  stroke(0, 0, 0);
  x = x + speed;
  if(x > width || x < 0) {
  	speed = -speed;
  }


  ellipse(x, 400, 100, 100);
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_23setup_draw_ellipse" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
