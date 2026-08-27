# dongle-lighthouse
a little lighthouse, there to bring you joy

*total hours: 20 hours*



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


## August 27: changing everything and finishing the PCB
*Time Spent: 4 hours*

Tonight I decided to change almost everything. My Lighthouse should not be a game anymore, it now just has to blink pretty. why I changed that: everything became to complicated, the time I had left was not enough, I never programmed something like this before, so it should not be that complicated to programm, the routing was impossible, because everything was so far awy from each other; what I changed: I made new LED-groups and connected them with other pins, I've cleaned up the schematic editor - now everything is much clear, the I deletet some LEDs that were making the routing just unnecessary complicated. In the RCB editor I changed the placement of nearly everything and optimized the edge.cuts. 
That's what it looks like then: 
<img width="1266" height="1025" alt="image" src="https://github.com/user-attachments/assets/9419ae24-c07a-4dbc-ae21-4c30a10c9d02" />
<img width="1246" height="1025" alt="image" src="https://github.com/user-attachments/assets/2944b588-59d1-493d-b1a9-f414a794e45f" />
I'm very proud oof how I made everything much better. I'm glad I decided to not do the game. Mow I have more time for everything and the stuff is not such a chaos anymore.

After that I finished the PCB in the morning. And the routings were suddenly so easy that it didn't take long until I finally was ready for adding a case and programming. That are the steps I'm planning to do next. 

## August 27: case and BOM
*Time Spent: 4 hours*
I made the case with Onshape.I made a floor (0.4mm high, so PCB+case=2mm) and border (2mm high, 1mm thick), so you can place the PCB in there. I decided not do build a roof, because I don't need it, have only a few hours left and also I didn't know how I would designe it. Because I used Onshape for some projects before, it didn't take long and I had just a few problems with importing the edge cuts. But searching for the right components for the BOM took very long. At first I had to find out what I have to search for, then I had to find them on the internet and create the table... But after roundabout 2 hours it was done. And now I can move on to programming it.
That's the case:
<img width="1920" height="1032" alt="image" src="https://github.com/user-attachments/assets/94c0ba91-488d-49da-8324-a765bdd45027" />

## August 27: programming 
*Time Spent: 1 hour*
I programmed some easy light on, light out code with Arduino.IDE. I use Arduino in school all the time, so there were no problems at all. Then I exported the case from Onshape, because I forgot that before.
<img width="781" height="1032" alt="image" src="https://github.com/user-attachments/assets/f5923490-48e1-441b-b141-305d16e3ff7d" />
Right now dongle extended for 12hours, so I have more time to add some sweet details. As my next step I will add some silkscreen drawings (like a hack club flag)  to the PCB and maybe do some other stuff. 
In Addition I will check the BOM for any mistakes, because I didn't do that before. 

## August 27: hack club flag, new case and some other changes
*Time Spent: 4 hours*
At first I changed the edge cuts in the PCB editor again, because I noticed that the section of the circuit board  around the USB port didn't stick out quite enough. Wanted to play it safe, I extended that section, After that I had to move the USB port, which meant deleting the traces that were connected with it and re-routing them. Then I added my "silkscreen drawings". Now the PCB looks like this:
front:
<img width="1266" height="713" alt="image" src="https://github.com/user-attachments/assets/cb28e84c-364a-4820-8cb2-91f6029c52b8" />
back:
<img width="1266" height="713" alt="image" src="https://github.com/user-attachments/assets/daae5372-85dc-482a-8eff-c6c8f3de7f39" />
After this first hour I moved on to making a new case. I had to make a new one, because I extended the curcuit board earlier. Also I wanted to import the PCB in ONshape to see hoe it looks with the case. First, I had problems with exporting the PCB (from KICAD) and importing it (to Onshape) the right way. That took me half an hour. Then I biult the case, but when I finished it, I didn't stop, because the colour of the case bottom ad the same colour as the circuit board, that's why I didn't recognice that I finished and thought something was wrong with bottom of the case. So I re-built the case two times until I noticed the colour of the bottom that was actually nothing wrong with. After this intensive hour I had problems again with the placement of PCB and case, so it looks like the PCB lays in the case. That took me additionaly half an hour. 
That's how it looks like: (I don't now why the USB port is missing, but it doesn't matter, because this was just to see how it'll looks like)
<img width="1920" height="1032" alt="image" src="https://github.com/user-attachments/assets/32bb008a-2530-4b41-b8b5-52a4fc134d29" />
The last hour I spent on searching for mistakes on the BOM after a quick check in the guide if I had missed sometihng or done something wrong. I checked if the Quantity, the costs and the links were right ( and hoped I chose the right items; I didn't want to investigate them too). Then I recogniced that the shiping costs were for the entire purchase on the website, but not for each item stack on one website. It took the rest of the hour to resolve the problem. 


Finally I can now submit my dongle.
