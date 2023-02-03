/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class Circle implements ShapeB{
public String baseclass="shape3";
public void Draw() 
{
    System.out.println("Drawing Circle here:"+baseclass);
}

@Override
public void Draw2()
{
    System.out.println("Drawing Circle here:"+baseclass);
}

}
