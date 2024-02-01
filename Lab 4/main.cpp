#include "headers/Keyboard.h"
#include "headers/CopyCommand.h"

using namespace entity;

int main() {
    Keyboard keyboard;

    keyboard.press("Ctrl+C");

    keyboard.press("Ctrl+V");

    keyboard.press("a");

    keyboard.undo();

    keyboard.undo();

    keyboard.press("b");

    keyboard.press("c");

    keyboard.press("d");

    keyboard.undo();

    keyboard.undo();

    keyboard.reassignKey("a", new CopyCommand());

    keyboard.press("a");

    return 0;
}