//Bronze 문제.

object Main {
  def main(args: Array[String]): Unit = {
    var inputs = (scala.io.StdIn.readLine() split " " take 2 map (_.toInt))
    val A = inputs(0)
    val B = inputs(1)
    if(A < B) {
      print("<")
    }
    else if(A > B) {
      print(">")
    }
    else {
      print("==")
    }
  }
}
