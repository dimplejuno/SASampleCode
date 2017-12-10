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

public class sketch_25setup_draw_mouse extends PApplet {

public void setup() {
  

}

public void draw() {
  background(255);

  fill(255, 0, 0);
  triangle(0,0, width, 0, mouseX, mouseY);
  fill(0, 255, 0);
  triangle(width, 0, width, height, mouseX, mouseY);
  fill(0, 0, 255);
  triangle(width, height,0, height, mouseX, mouseY);
  fill(255, 255, 0);
  triangle(0, height, 0, 0, mouseX, mouseY);
}
  public void settings() {  size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_25setup_draw_mouse" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
