import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;
import java.util.*;

public class Main {
     public static void main(String[] args) {
          Scanner s = new Scanner(System.in);
          System.out.println("Please enter statement to be parsed");
          //Example: "INSERT INTO animals VALUES FROM ("Joe", "cat", 4);"
          String in = s.nextLine();
          dmlLexer lexer = new dmlLexer( new ANTLRInputStream(in));
          CommonTokenStream tokens = new CommonTokenStream(lexer);
          dmlParser parser = new dmlParser(tokens);
          ParseTree tree = parser.program();
          System.out.println(tree.toStringTree(parser));
          
     }
}