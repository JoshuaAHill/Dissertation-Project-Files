#include "pxt.h"
//libs_core

namespace sound{

    /**
     * Record clip
     */
    //% blockID = audio_record block="Record sound clip"
    //% weight=80
	void __record(){
#if MICROBIT_CODAL
        //uBit.audio.recorder->startRecording();
#else
    	target_panic(PANIC_VARIANT_NOT_SUPPORTED);
#endif
	}

    /**
     * Playback clip
     */
    //% blockID = audio_playback block="Playback sound clip"
    //% weight=70
	void __playback(){
#if MICROBIT_CODAL
        //uBit.audio.recorder->playback(11025);
#else
    	target_panic(PANIC_VARIANT_NOT_SUPPORTED);
#endif
	}

    /**
     * Get Closest Primary Note
     */
    //% blockID = get_closest_note block="Get Closest Note"
    //% weight=60
    void __startRecording(){
#if MICROBIT_CODAL
        //uBit.audio.fft->startRecording();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

        /**
     * Stop Recording
     */
    //% blockID = stop_recording block="Stop Recording"
    //% weight=60
    void __stopRecording(){
#if MICROBIT_CODAL
        //uBit.audio.fft->stopRecording();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Get Closest Primary Note
     */
    //% blockID = get_closest_Note block="Get Closest Note"
    //% weight=60
    int __getClosestNote(){
#if MICROBIT_CODAL
        //return uBit.audio.fft->getClosestNote();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Get Closest Primary Freq
     */
    //% blockID = get_closest_Freq block="Get Primary Freq"
    //% weight=60
    int __getClosestFreq(){
#if MICROBIT_CODAL
        //return uBit.audio.fft->getFrequency();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Get Closest Secondary Note
     */
    //% blockID = get_closest_Note_S block="Get Closest Secondary Note"
    //% weight=60
    int __getClosestSecondaryNote(){
#if MICROBIT_CODAL
        //return uBit.audio.fft->getSecondaryNote();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Get Closest Secondary Freq
     */
    //% blockID = get_closest_Freq_P block="Get Secondary Freq"
    //% weight=60
    int __getClosestSecondaryFreq(){
#if MICROBIT_CODAL
        //return uBit.audio.fft->getSecondaryFrequency();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }


    /**
     * On Heard Note A
     */
    //% blockID = on_note_A block="On Hearing A"
    //% weight=70
    void __onNoteA(Action body){
#if MICROBIT_CODAL
        //registerWithDal(DEVICE_ID_AUDIO_PROCESSOR,DETECTED_A,body);
#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);
#endif
    }

    /**
     * On Heard Note E
     */
    //% blockID = on_note_E block="On Hearing E"
    //% weight=70
    void __onNoteE(Action body){
#if MICROBIT_CODAL
        //registerWithDal(DEVICE_ID_AUDIO_PROCESSOR,DETECTED_E,body);
#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);
#endif
    }

    /**
     * Play Freq
     */
    //% blockID = play_freq block="PLay Frequency"
    //% weight=70
    void __playFrequency(int freq, int ms){
#if MICROBIT_CODAL
        uBit.audio.fft->playFrequency(freq, ms);
#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);
#endif
    }

    /**
     * Start Morse
     */
    //% blockID = start_morse block="Start Morse"
    //% weight=60
    void __startRecognition(){
#if MICROBIT_CODAL
        //uBit.audio.morse->startRecognise();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Stop Morse
     */
    //% blockID = stop_morse block="Stop Morse"
    //% weight=60
    void __stopRecognition(){
#if MICROBIT_CODAL
        //uBit.audio.morse->stopRecognise();

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

//just use play string
//     /**
//      * Play Morse Char
//      */
//     //% blockID = play_morse_char block="Play Morse Char"
//     //% weight=60
//     void __playChar(char c, bool primary){
// #if MICROBIT_CODAL
//         //uBit.audio.morse->playChar(c, primary);

// #else
//         target_panic(PANIC_VARIANT_NOT_SUPPORTED);

// #endif
//     }

    /**
     * Play Morse String
     */
    //% blockID = play_morse_string block="Play Morse Char"
    //% weight=60
    void __playString(String str, bool primary){
#if MICROBIT_CODAL
        //uBit.audio.morse->playString(str, primary);

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Get last heard char
     */
    //% blockID = get_last_char block="Get last heard letter"
    //% weight=60
    int __getLastChar(bool primary){
#if MICROBIT_CODAL
        //return uBit.audio.morse->getLastChar(primary);

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Clear input buffers
     */
    //% blockID = clear_morse_buf block="Clear Buffer"
    //% weight=60
    void __clearStored(bool primary){
#if MICROBIT_CODAL
        //uBit.audio.morse->clearStored(primary);

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }

    /**
     * Get stored result
     */
    //% blockID = get_stored_morse_result block="Get Stored result"
    //% weight=60
    String __getStored(bool primary){
#if MICROBIT_CODAL
        //return uBit.audio.morse->getStored(primary);

#else
        target_panic(PANIC_VARIANT_NOT_SUPPORTED);

#endif
    }




}