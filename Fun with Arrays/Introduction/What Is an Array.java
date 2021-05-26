/*
  An array is defined as a collection of items, where the items can be integers, strings, DVDs--or anything really.
  
  Elements of an array are stored in contiguous memory locations. 
*/


/* 
  Now I'm going to be following along with the lesson
  To create an array of 15 DVDs, we may define something like the following:
*/

DVD[] dvdCollection = new DVD[15]; // creates an array to hold DVDs

public class DVD { // defines what a DVD is 
  public String name;
  public int releaseYear;
  public String director;

  public DVD( String name, int releaseYear, String director ) {
    this.name = name;
    this.releaseYear = releaseYear;
    this.director = directory;
  }

  public String toString() {
    System.out.println(
      this.name + ", directed by " + this.director + ", released in " + this.releaseYear)
  }
}
