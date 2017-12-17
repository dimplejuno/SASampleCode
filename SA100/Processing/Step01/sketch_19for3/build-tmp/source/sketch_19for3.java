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


for(int i=0;i<=width;i=i+width/8){
  line(i, 0, i, height);
  line(0, i, width, i);

  line(0, i, i, 0);
  line(i, height, width, i);

  //line(0, height-i, i, height);
  //line(i, 0, width, height-i);

}
    noLoop();
  }

  public void settings() { size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_19for3" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
