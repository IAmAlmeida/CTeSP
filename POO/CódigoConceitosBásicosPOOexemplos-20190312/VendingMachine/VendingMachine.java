
/**
 * Project VendingMachine
 * Class VendingMachine
 * 
 * The VendingMachine is a variation of the class
 * Vending1 in Chapter 2 of the textbook.
 * 
 * Assumptions:
 * (1) The vending machine only dispenses candy bars.
 * (2) Candy costs $0.75 (3 quarters).
 * (3) You use the depositQuarter method to enter quarters.
 * (4) After entering 3 quarters, use the selectCandy
 *     method to get the candy bar.
 * (5) If you enter too many quarters, you do not get
 *     change back.
 * (6) If the vending machine is out of candy bars,
 *     you do not get your money back.
 */

public class VendingMachine
{
    // Instance Variables:
    // The number of candy bars currently in machine.    
    private int numberCandyBars;

    // The number of quarters deposited for current
    // candy bar purchase.
    private int numberQuarters;
    
    // Default NoArg Constructor
    public VendingMachine()
    {
        numberCandyBars = 0;
        numberQuarters = 0;
    }
    
    public VendingMachine(int n)
    {
        numberCandyBars = n;
        numberQuarters = 0;
    }
    
    public void depositQuarter()
    {
        numberQuarters++;
    }
    
    public void selectCandy()
    {
        if(numberQuarters >= 3 && numberCandyBars > 0)
        {
            System.out.println("Candy bar dispensed.");
            numberQuarters = 0;
            numberCandyBars--;
        }
        else
        {
            System.out.println(
                "Could not dispense candy bar");
        }
    }
    
    public void printStatus()
    {
        System.out.println(
            "Number of candy bars = " + numberCandyBars);
        System.out.println(
            "Number of quarters = " + numberQuarters);
        System.out.println();
    }
}
