
/**
 * DigitalClock - Simula um relógio digital.
 * 
 * @author  José Cordeiro
 * @version 18/10/2015
 */
public class DigitalClock
{

    private int hours;
    private int minutes;
    private boolean mode12Hours;

    /**
     * Construtor para objetos da classe DigitalClock
     */
    public DigitalClock() {
        hours = 0;
        minutes = 0;
        mode12Hours = true;
    }

    public int getMinutes() {
        return minutes;
    }

    public void setMinutes(int newMinutes) {
        if (newMinutes >= 0 && newMinutes < 60) {
            minutes = newMinutes;
        }
    }

    public int getHours() {
        return hours;
    }

    public void setHours(int newHours) {
        if(newHours >= 0 && newHours < 24) {
            hours = newHours;
        }
    }

    public boolean isMode12Hours() {
        return mode12Hours;
    }

    public void setMode12hours(boolean newMode12Hours) {
        mode12Hours = newMode12Hours;
    }

    public void showTime() {
        int hoursToShow = hours;
        String sufixHours = "";

        if (mode12Hours) {
            if (hours < 12) {
                sufixHours = " AM";
                if(hours == 0) {
                    hoursToShow = 12;
                }
            } else {
                sufixHours = " PM";
                if (hours > 12) {
                    hoursToShow = hours - 12;
                }
            }
        }

        String time = "";

        if (hoursToShow < 10) {
            time = time + "0";
        }
        time = time + hoursToShow + ":";

        if (minutes < 10) {
            time = time + "0";
        }
        time = time + minutes;

        System.out.println(time + sufixHours);
    }

    public void forwardOneMinute() {
        if (minutes < 59) {
            minutes += 1;
        }
        else {
            minutes = 0;
            hours += 1;
        }
    }

}
