# dongle-GAMES
a little game where you have to push the same arrow-buttons on the keyboard as the Leds show in a specific time to win.

*total hours: __ hours*



## August 26: planning the game, schematic editor
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
The only thing that is missing in the schematic editor are the footprints. That will be my very next step. And then I will hop into the PCB editor and see what I have to do there.


## August 26: PCB editor 
*Time Spent: 3 hours*

After lunch I finished my morning work - schematic editor - by assigning the footprints. I had some proplems with assigning the right footprint to the USB plug. It took a few tries and little guiding from my older sibling, but finally I selected the right footprint. After that I chanced the board thickness as the guide says and brought the footprints into the PCB editor. Now I had to come up with a good Layout. The decision was made fast: It should be a lighthouse (since that fits well with the constantly changing lights in the game). I draw one myself in "Paint", put the picture in the PCB editor and draw my outlines based on my drawing. My last step was to place everythig inside the lighthouse-outline. Additionally I made 4 groups, each out of 3 LEDs, with the same pin, because they will be the arrows and only light toghether. After that I had more unused pins I connected with several LEDs, which are decorating the Lighthouse and fill the place on its sides.
That's what it looks like now:
<img width="1246" height="1025" alt="image" src="https://github.com/user-attachments/assets/58ea3a4f-2a62-4d73-a164-58f1ad5ad0f0" />
I will do the routing next. But for that I possibly move some footprints elsewhere, because the routings should be as short as possible. I was struggling with that since now, so I decided to try later again, after a bit research and talking about it with others. 
My goal is to finish the PCB editor today, so I can start programming tomorrow. 
