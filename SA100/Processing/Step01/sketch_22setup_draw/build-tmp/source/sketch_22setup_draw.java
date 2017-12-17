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

public class sketch_22setup_draw extends PApplet {

// 함수(function)
// void는  리턴값의 타입 
// 함수 이름 
public void setup() {
  println("I'm starting");
}

public void draw() {
  println("I'm running");
}
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_22setup_draw" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
