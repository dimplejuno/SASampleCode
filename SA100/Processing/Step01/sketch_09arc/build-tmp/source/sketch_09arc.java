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

public class sketch_09arc extends PApplet {
  public void setup() {


//arc(400, 400, 400, 400, 0, HALF_PI);
//arc(400, 400, 400, 400, HALF_PI, PI);
//arc(400, 400, 400, 400, PI, PI+QUARTER_PI);


arc(400, 400, 200, 200, 0.52f, 5.76f);
//arc(400, 400, 200, 200, 0.52, 5.76, PIE);
//arc(400, 400, 200, 200, 0.52, 5.76, CHORD);
    noLoop();
  }

  public void settings() { size(800, 800); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch_09arc" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
