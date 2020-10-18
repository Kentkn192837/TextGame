#include <stdio.h>

int main(void)
{
    int action = 0;
    int event = 1;

    printf( "魔王が現れました。\nあなたはどうする？\n" );
    printf( "1:たたかう  2:にげる\n" );
    while ( event ) {
        scanf( "%d" , &action );
        if ( action == 1 ) {
            printf( "あなたは魔王と戦った。\n" );
            break;
        } else if ( action == 2 ) {
            printf( "あなたは魔王から逃げ出した。\n" );
            break;
        } else {
            printf( "1か2を選択してください\n" );
            continue;
        }
    }

    return 0;
}
