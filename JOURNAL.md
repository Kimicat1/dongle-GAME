# dongle-GAMES
a little game where you have to push the same arrow-buttons on the keyboard as the Leds show in a specific time to win.

*total hours: __ hours*



## August 26: planning the game, working on the schematic editor
*Time Spent: 5 hours*

I'm totally new to designing a PCB. I never heard of KICAD before, so I used the Guide. Since i was so new to everything, of course, everything took longer, but nevertheless it went well for most of the time; however, importing the MCU turned out to be quite a big problem. I spent a whole hour trying to figure it out until I finally managed to get it working.
After assigning all the LEDs, their corresponding resistors, and the footprints, I took a break.

That's what my schematic editor looks like right now:
<img width="1266" height="1032" alt="image" src="https://github.com/user-attachments/assets/bfbddda0-3552-44d4-8597-5b43478e4df5" />

 During this break, I have developed the game in more detail:

Up to that point, I only had the idea that the LEDs would light up in a way that formed arrows. One of the four possible arrow directions (up, left, down, right) would be selected randomly, and the player would then have to press the corresponding arrow key on the PC keyboard. However, the player would only have a certain amount of time to do so.

so that's what I came too in the break:
When the start button is pressed, a single LED positioned slightly away from the other LEDs (the ones forming the arrows) lights up. Then, one of the four possible arrows is displayed randomly, and the player has to press the corresponding arrow key as quickly as possible. If the correct key is pressed, the next arrow is displayed. The more arrows the player successfully completes, the less time they have to press the next arrow key.

If the player does not press a key within the given time or presses the wrong arrow key, the separate LED starts flashing, signalling “Game Over.” To play the game again, the player has to press the start button once more.
