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

public class sketch_23setup_draw_ellipse2 extends PApplet {

int x = 400;
int y = 400;
int xspeed = 10;
int yspeed = 10;
boolean flag = false;
public void setup() {
  
}
public void draw() {
  background(255);
  ellipse(400, 400, 100, 100);
  if (keyPressed && !flag) {
    if ((key == 'a') || (key == 'A')) {
      flag = true;
      if(random(100) > 50){
        xspeed = -xspeed;
      }
      if(random(100) > 50) {
        yspeed = -yspeed;
      }
      
    }
  }

  if(flag) {
    x = x + xspeed;
    y = y + yspeed;

    if(x > width || x < 0 || y > height || y < 0 ){
      flag = false;
      x = 400;
      y = 400;
    }
  }
  ellipse(x, y, 10, 10);
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_23setup_draw_ellipse2" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
