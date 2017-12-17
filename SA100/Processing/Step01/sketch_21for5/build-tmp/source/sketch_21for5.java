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

public class sketch_21for5 extends PApplet {
  public void setup() {



for(int i=0;i<=width;i=i+width/8){
  for(int j=0;j<=width;j=j+width/8){
  	//fill(random(255), random(255), random(255));
  	fill(map(i, 0, width, 0, 255), 0, 0);
  	rect(j, i, width/8, width/8);
  }
}
    noLoop();
  }

  public void settings() { size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_21for5" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
