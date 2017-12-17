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

public class sketch_17for extends PApplet {
  public void setup() {


for(int x=0; x<=800; x=x+10){
  line(x, 0, x, 800);
}

line(0, 0,  800,0);
line(0,100, 800, 100);
line(0,200, 800, 200);
line(0,300, 800, 300);


/*
for(int x=0;x<=width;x=x+width/8){
  line(x, 0, x, width);
}
*/
    noLoop();
  }

  public void settings() { size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_17for" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
