/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author HP
 */
public class Circle implements ShapeA, ShapeB, ShapeC{
@Override
public void Draw()
{
        // Try to change ,will get error because baseclass is final
        //baseclass = "Trying-To-Change Vlaue"
    System.out.println("Drawing Circle here:" + ShapeA.baseclass);
}

@Override
public void Draw2() 
{
    System.out.println("Drawing Circle here:" + ShapeB.baseclass);
}

@Override
public void Draw3() 
{
    System.out.println("Drawing Circle here:" + ShapeC.baseclass);
}

}
