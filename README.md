# chapter14towersOfHanoi

In the book, you can find the code for the Towers of Hanoi project. Implement it in a project. Make sure it runs correctly for 3 disks, as shown in the book -- be sure to carefully check all the moves, they must match the results in the book. Now make some changes. Add a variable to count the number of moves and report that number at the end. Ask the user how many disks to use. Run the program with 4 disks and take a screenshot. It should look like this:

![Ch 14 Towers Hanoi 4 disks](https://github.com/bell-kevin/chapter14towersOfHanoi/blob/main/towersOfHanoi/hanoi.PNG)

Run the project with 10 disks -- it takes noticeable time to print out all the steps. Take a screenshot of the bottom of the output.

![p](https://github.com/bell-kevin/chapter14towersOfHanoi/blob/main/towersOfHanoi/hanoi10.PNG)

Next, comment out the line that prints which disk is moving from one peg to the other. Run the program with 15 disks and take a screenshot. The output should look like this:

![Ch 14 Towers Hanoi 15 disks](https://github.com/bell-kevin/chapter14towersOfHanoi/blob/main/towersOfHanoi/hanoi15.PNG)

If a computer is running 3.2 Gigahertz, that is 3.2 billion cycles a second. The game with 15 disks took 32,767 moves but there was a noticeable lag -- there is far more than the 32,767 moves going on, there are many many cycles being used for the recursive calls, as explained in the book. Run it with 20 disks, and be patient, there will be a very obvious lag between the start and finish of the project. Take a screenshot of that result.

![o](https://github.com/bell-kevin/chapter14towersOfHanoi/blob/main/towersOfHanoi/hanoi20.PNG)

You should end up with 4 screenshots of running the code -- with every move for 4 and 10 disks, and with only the number of moves for 15 and 20 disks.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
