COMP 142 Programming Project 2, Spare a Square

Name: Emery Morales

Email Address: morej-22@rhodes.edu

Please summarize the help you found useful for this assignment, which
may include office hours, discussion with peers, tutors, et cetera.
If none, say "none".

Zybooks COMP142: Computer Science II: Object Oriented Programming
  2.19 Random numbers
Rhodes College Computer Science Tutors

================================ Questions ==================================

BEFORE beginning to code, consider the following questions. Use your expectation
to test your program when you believe you have written the code correctly. Does
it produce the values that you expect?

- Given N starting squares what is the expected # of squares remaining if p=0
  (i.e. everyone is a little-chooser?)

  : N

- Given N starting squares what is the expected # of squares remaining if p=1
  (i.e. everyone is a big-chooser?)

  : 1

1. Experiment with number of simulations holding the other parameters constant
   at N=10 and p=0.5. Manually run your program several times varying the number
   of simulations for sims=100, 1,000, 10,000, and 100,000, and 1,000,000.
   Create a neatly formatted table in your readme.txt showing the number of
   simulations and the resulting average. This experiment is important so that
   we can understand how the results change based on number of trials.

   N=10 and p=0.5
                       # simulations |     average    |
                      ---------------------------------
                             100     |       3.1      |
                            1,000    |      3.62      |
                           10,000    |     3.4957     |
                          100,000    |     3.5279     |
                         1,000,000   |    3.52949     |


2. Why run more simulations and wait longer if an accurate result can be found
   with fewer simulations? Use your table to suggest the point of “diminishing
   returns” (indicate a number of simulations to perform) where performing more
   simulations does not improve the accuracy significantly.

   : The more simulations you run the more accurate your result will be.
     Percentage error will  be lower because of decimal places.
   : Diminishing returns point is somewhere between 100,000 to 1,000,000.
     The number of recommended simulations is 100,000. Based on the chart above,
     the difference between 100,000 to 1,000,00 is practically negligible.

3. Summary: If you have learned anything from this assignment it should be that
   to ensure the most amount of toilet paper remains when the first roll becomes
   empty we should all be ???-choosers (fill in the blank).

   : little-choosers
   : If everyone is a big-chooser, then the big role will eventually become the
    size of the small roll. This means that the two roles will be of equal size
    and people will chose the closest roll(roll1). Then, roll1 will become the
    small roll and people will chose the bigger role. The process will repeat.

================================ Remarks ====================================

Filling in anything here is OPTIONAL.

Approximately how long did you spend on this assignment?

: 1 day

Were there any specific problems you encountered? This is especially useful to
know if you turned it in incomplete.

: I did not understand why RAND_MAX needed to be used in randUniform(). I was
  able to understand why RAND_MAX need to be divided into rand(). The number
  generated must in between 0 - 1. A way to do this is by making sure the
  denominator is a number greater than the rand().

Do you have any other remarks?

: No other remarks.
