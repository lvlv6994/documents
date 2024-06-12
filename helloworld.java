package helloworld;

import java.util.*;
// I don't know how to build a list by Java Program.
// how to learn Programming ?
public class HelloWorld{
    static String 你好世界 = "hello world";
    static {
        // What is computer?
        // program is how to load an unload ?
    }
    static class 用户{
        public String 姓名;
        public int 年龄;
        public 用户(String 姓名,int 年龄){
            this.姓名 = 姓名;
            this.年龄 = 年龄;
        }
        public String toString(){
            return this.姓名 + " " + this.年龄;
        }
    }

    static void 你好吗(String 某人){
        System.out.println("你好吗？" + 某人);
    }
    
    public static void main(String[] args){
        new Thread(()->{
                System.out.println("hello world");
        }).start();
        System.out.println(你好世界);
        你好吗("老张");
        用户 老张 = new 用户("老张",10);
        System.out.println(老张);
    }
}
