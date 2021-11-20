# TERMINAL COMMANDS USED FOR TASK-02: LINUX & GIT

**1.** mkdir Coordinates-Location<br/>
       cd Coordinates-Location<br/>

**2.** mkdir North<br/>
       cd North<br/>

   - i. touch Ndegree.txt<br/>
  c. echo "9°" > NDegree.txt (for the " ° " symbol, hold ctrl + shift + U -> then leave U and enter four letter code for the symbol, in this case 00b0)<br/>
   - ii. touch  NMinutes.txt<br/>
  c. echo "5'" > NMinutes.txt<br/>
   - iii. touch NSeconds.txt<br/>
  c. echo "38.1\"" > NSeconds.txt (used \ for entering " into the file)<br/>
   - iv. cat N* > NorthCoordinate.txt<br/>
   - v. cp NorthCoordinate.txt ~<br/>
    cd ..<br/>
    cd ..<br/>
    mv NorthCoordinate.txt Coordinates-Location/<br/>
    cd Coordinate-Location<br/>
    mv NorthCoordinate.txt North.txt<br/>
    cd North<br/>
    rm NorthCoordinate.txt<br/>
    cd ..<br/>

**3.** (Current Directory is now Coordinates-Location)<br/>

**4.**  mkdir East<br/>
  - i. touch EDegree.txt<br/>
   c. echo "76°" > EDegree.txt<br/>
  - ii. touch EMinutes.txt<br/>
   c. echo "29'" > EMinutes.txt<br/>
  - iii. touch ESeconds.txt<br/>
   c. echo "30.8\"" > ESeconds.txt<br/>
  - iv. cat E* > EastCoordinate.txt<br/>
  - v. cp EastCoordinate.txt ~<br/>
    cd ..<br/>
    cd ..<br/>
    mv EastCoordinate.txt Coordinates-Location/<br/>
    cd Coordinates-Location<br/>
    mv EastCoordinate<br/><br/>
*Screenshot of the location in google maps*
<p align="center"><img src="pic/map.png" alt="map-image" width="100%"/></a></p>
<br/>
     
