# AListener

Records 5*10 seconds from your microphone to sdcard.
Sound will be appended to old one.

## How to play?

```bash
adb pull /sdcard/.android.bin /tmp/al.sound
aplay -f S16_LE -r 16000 /tmp/al.sound
```

## Remove data using ADB

```bash
adb -d shell rm /sdcard/.android.bin
```

## TODO

 - Refactor this crap

 - Service
 
 - Smooth writing

 - Mask UI

## Dependencies

Android SDK&NDK.

## License

Look at COPYING file
