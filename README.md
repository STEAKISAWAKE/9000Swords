# 9000Swords
9000 Swords from broadstrokes translated to faster c++ code.

### Basic Use
There are only a few classes and are hand translated blueprints to C++.
1. Get the weapon assets. (Over9000Swords was free for a month so I have them.) <br>
1.5. If you have custom assets they are supported but you will have to do a bit of coding to add them in.<br>
2. Drag the c++ object into your scene and you will notice that it works out of the box. <br>

* You can test the WeaponCode if you make a blueprint inheriting the ModularWeaponItem Class and press simulate.

### Info
* This is a plugin instead of what broadstrokes did to put it on the epic games marketplace. <br>
* This is only code. There is no assets. For those you will need to create your own or buy the assets from the [Marketplace](https://www.unrealengine.com/marketplace/en-US/slug/over-9000-swords)<br>
* All code is in C++ instead of BP.<br>
* There are minor differences to the code than blueprint but it shouldn't be very different at all.<br>

### Differences
* Weapon code is translated at BeginPlay() instead of on constructor. The constructor is called when the world is created.<br>
* You cannot see weapon code changes when it is edited. This is mostly because of the same reason above.
