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

public class sketch_24setup_draw_mouse extends PApplet {

public void setup() {
  

}

public void draw() {
  background(255);

  line(0,0, mouseX, mouseY);
  line(width,0, mouseX, mouseY);
  line(0,height, mouseX, mouseY);
  line(width,height, mouseX, mouseY);
}
  public void settings() {  size(480, 400); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_24setup_draw_mouse" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
