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



for(int i=0;i<=400;i=i+40){
  for(int j=0;j<=400;j=j+40){
  	//fill(random(255), random(255), random(255));
  	fill(i, 0, 0);
  	rect(j, i, 40, 40);
  }
}
    noLoop();
  }

  public void settings() { size(400, 400); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_21for5" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
