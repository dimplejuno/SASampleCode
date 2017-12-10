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

public class sketch_19for3 extends PApplet {
  public void setup() {


for(int i=0;i<=400;i=i+40){
  line(i, 0, i, 400);
  line(0, i, 400, i);
  line(i, 0, 400, 400-i);
  line(0, i, 400-i, 400);
  line(i, 400, 400, 0+i);
  line(0, 400-i, 400-i, 0);
}
    noLoop();
  }

  public void settings() { size(400, 400); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_19for3" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
