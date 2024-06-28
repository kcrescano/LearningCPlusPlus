#include <iostream>
using namespace std;

int main()
{
    std::string camel = R"(
        Switching on the camera in the camel habitat...
         ___.-''''-.
        /___  @    |
        ',,,,.     |         _.'''''''._
             '     |        /           \\
             |     \\    _.-'             \\
             |      '.-'                  '-.
             |                               ',
             |                                '',
              ',,-,                           ':;
                   ',,| ;,,                 ,' ;;
                      ! ; !'',,,',',,,,'!  ;   ;:
                     : ;  ! !       ! ! ;  ;   :;
                     ; ;   ! !      ! !  ; ;   ;,
                    ; ;    ! !     ! !   ; ;
                    ; ;    ! !    ! !     ; ;
                   ;,,      !,!   !,!     ;,;
                   /_I      L_I   L_I     /_I
        Look at that! Our little camel is sunbathing!)";

    std::string lion = R"(
        Switching on the camera in the lion habitat...
                                                       ,w.
                                                     ,YWMMw  ,M  ,
                                _.---.._   __..---._.'MMMMMw,wMWmW,
                           _.-""        '''           YP"WMMMMMMMMMb,
                        .-' __.'                   .'     MMMMW^WMMMM;
            _,        .'.-'"; `,       /`     .--""      :MMM[==MWMW^;
         ,mM^"     ,-'.'   /   ;      ;      /   ,       MMMMb_wMW"  @\\
        ,MM:.    .'.-'   .'     ;     `\\    ;     `,     MMMMMMMW `"=./`-,
        WMMm__,-'.'     /      _.\\      F'''-+,,   ;_,_.dMMMMMMMM[,_ / `=_}
        "^MP__.-'    ,-' _.--""   `-,   ;       \\  ; ;MMMMMMMMMMW^``; __|
                   /   .'            ; ;         )  )`{  \\ `"^W^`,   \\  :
                  /  .'             /  (       .'  /     Ww._     `.  `"
                 /  Y,              `,  `-,=,_{   ;      MMMP`""-,  `-._.-,
                (--, )                `,_ / `) \\/"")      ^"      `-, -;"\\:
        The lion is roaring!)";

    std::string deer = R"(
        Switching on the camera in the deer habitat...
           /|       |\\
        `__\\       //__'
           ||      ||
         \\__`\\     |'__/
           `_\\   //_'
           _.,:---;,._
           \\_:     :_/
             |@. .@|
             |     |
             ,\\.-./ \\
             ;;`-'   `---__________-----.-.
             ;;;                         \\_\\
             ';;;                         |
              ;    |                      ;
               \\   \\     \\        |      /
                \\_, \\    /        \\     |\\
                  |';|  |,,,,,,,,/ \\    \\ \\_
                  |  |  |           \\   /   |
                  \\  \\  |           |  / \\  |
                   | || |           | |   | |
                   | || |           | |   | |
                   | || |           | |   | |
                   |_||_|           |_|   |_|
                  /_//_/           /_/   /_/
        Our 'Bambi' looks hungry. Let's go to feed it!)";

    std::string goose = R"(
        Switching on the camera in the goose habitat...

                                            _
                                        ,-"" "".
                                      ,'  ____  `.
                                    ,'  ,'    `.  `._
           (`.         _..--.._   ,'  ,'        \\    \\
          (`-.\\    .-""        ""'   /          (  d _b
         (`._  `-"" ,._             (            `-(   \\
         <_  `     (  <`<            \\              `-._\\
          <`-       (__< <           :
           (__        (_<_<          ;
            `------------------------------------------
        The goose is staring intently at you... Maybe it's time to change the channel?)";

    std::string bat = R"(
        Switching on the camera in the bat habitat...
        _________________               _________________
         ~-.              \\  |\\___/|  /              .-~
             ~-.           \\ / o o \\ /           .-~
                >           \\  W  //           <
               /             /~---~\\             \\
              /_            |       |            _\\
                 ~-.        |       |        .-~
                    ;        \\     /        i
                   /___      /\\   /\\      ___\\
                        ~-. /  \\_/  \\ .-~
                           V         V
        This bat looks like it's doing fine.)";

    std::string rabbit = R"(
        Switching on the camera in the rabbit habitat...
                 ,
                /|      __
               / |   ,-~ /
              Y :|  //  /
              | jj /( .^
              >-"~"-v"
             /       Y
            jo  o    |
           ( ~T~     j
            >._-' _./
           /   "~"  |
          Y     _,  |
         /| ;-"~ _  l
        / l/ ,-"~    \\
        \\//\\/      .- \\
         Y        /    Y
         l       I     !
         ]\\      _\\    /"\\
        (" ~----( ~   Y.  )
        It looks like we will soon have more rabbits!)";


    // write your code here
    string animals[] = {camel, lion, deer, goose, bat, rabbit};

    while (true) {
        cout << "Please enter the number of the habitat you would like to view:";
        
        string cmd;
        cin >> cmd;
        
        if (cmd == "exit") {
            cout << "\nSee you later!";
            exit(0);
        } 
        
        int habitat = stoi(cmd);
        if (habitat >= 0 and habitat <= 5 )
            cout << animals[habitat] << "\n\n\n";
        else
            cout << "\nError, you have entered the wrong animal number!\n\n" << endl;;
    }
    
    return 0;
}
