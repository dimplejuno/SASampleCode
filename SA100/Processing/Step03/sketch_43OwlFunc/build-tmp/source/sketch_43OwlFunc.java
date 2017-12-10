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

public class sketch_43OwlFunc extends PApplet {

public void setup() {
  
}

public void draw() {
  background(176, 204, 226);
  owl(110, 110);
  owl(180, 110);
}

public void owl(int x, int y) {
  pushMatrix();
  translate(x, y);
  stroke(138, 138, 125);
  strokeWeight(70);
  line(0, -35, 0, -65); // Body
  noStroke();
  fill(255);
  ellipse(-17.5f, -65, 35, 35); // Left eye dome
  ellipse(17.5f, -65, 35, 35);  // Right eye dome
  arc(0, -65, 70, 70, 0, PI);  // Chin
  fill(51, 51, 30);
  ellipse(-14, -65, 8, 8); // Left eye
  ellipse(14, -65, 8, 8);  // Right eye
  quad(0, -58, 4, -51, 0, -44, -4, -51); // Beak
  popMatrix();
}
  public void settings() {  size(480, 120); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_43OwlFunc" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
