#include "MicroBitSerial.h"
#include "MicroBit.h"
#include "CodalDmesg.h"
#include "MicroBitAudioProcessor.h"
#include "StreamNormalizer.h"
#include "Tests.h"
#include "MorseCode.h"
#include <chrono>
#include <cstdio>

#include "LevelDetector.h"
#include "StreamSplitter.h"

static NRF52ADCChannel *mic = NULL;
static StreamNormalizer *processor = NULL;
static MicroBitAudioProcessor *fft = NULL;
static MorseCode *mc = NULL;

static LevelDetector *level = NULL;
static StreamSplitter *splitter = NULL;

MicroBit uBit;


void onA(MicroBitEvent){
    DMESGF("A Recieved at Main");
    uBit.display.print('A');
    uBit.audio.fft->playFrequency(329, 200);
    //uBit.sleep(500);

}

void onB(MicroBitEvent){

    uBit.display.print('B');

}
void onC(MicroBitEvent){

    uBit.display.print('C');

}
void onD(MicroBitEvent){

    uBit.display.print('D');

}
void onE(MicroBitEvent){

    uBit.display.print('E');

}
void onF(MicroBitEvent){

    uBit.display.print('F');

}
void onG(MicroBitEvent){

    uBit.display.print('G');

}

void onFirst(MicroBitEvent){
    uBit.audio.fft->playFrequency(440, 200);
    uBit.display.print('A');

}

void onSecond(MicroBitEvent){
    uBit.audio.fft->playFrequency(360, 200);
    uBit.display.print('B');

}

/**
  * fft_test function - creates an example MicroBitAudioProcessor and then queries it for results.
  * Currently configured to use 1024 samples with 8bit signed data.
  */
void fft_test(){

    // -- use if wanting to make your own custom pipeline -- //

    //  if (mic == NULL){
    //     mic = uBit.adc.getChannel(uBit.io.microphone);
    //     mic->setGain(7,0);
    // }

    // if (processor == NULL)
    //     processor = new StreamNormalizer(mic->output, 0.2f, true, DATASTREAM_FORMAT_8BIT_SIGNED, 10);

    // if (splitter == NULL)
    //     splitter = new StreamSplitter(processor->output);

    // if (fft == NULL)
    //     fft = new MicroBitAudioProcessor(*splitter);

    // if (mc == NULL)
    //     //mc = new MorseCode(*fft,'A', 'E', uBit.audio.virtualOutputPin);
    //     mc = new MorseCode(*fft, uBit.audio.virtualOutputPin);

    // uBit.io.runmic.setDigitalValue(1);
    // uBit.io.runmic.setHighDrive(true);


    // -- using uBit objects -- //
    //Start fft running
    uBit.audio.fft->startRecording();

    // -- Morse Code -- //
    //mc = uBit.audio.morse;
    //mc->startRecognise();

    // -- Events -- //

    // -- Freq recogniser events -- //
    //uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_A, onA);
    // uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_B, onB);
    // uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_C, onC);
    // uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_D, onD);
    // uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_E, onE);
    // uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_F, onF);
    // uBit.messageBus.listen(DEVICE_ID_AUDIO_PROCESSOR, DETECTED_G, onG);

    // -- Tap detector events - automaticaly start the system -- //
    // uBit.messageBus.listen(DEVICE_ID_TAP, FIRST_SEQUENCE, onFirst);
    // uBit.messageBus.listen(DEVICE_ID_TAP, SECOND_SEQUENCE, onSecond);

    // -- vars used in code below -- //
    std::string primaryOut;
    char lastChar = ' ';
    bool toggle = false;

    // -- Enabling faster clock -- //
    NRF_CLOCK->EVENTS_HFCLKSTARTED = 0;
    NRF_CLOCK->TASKS_HFCLKSTART = 1;
    while (NRF_CLOCK->EVENTS_HFCLKSTARTED == 0);


    //This loop contains some examples of functionality
    while(1){
        //using 500 to help timing with tap detector
        uBit.sleep(500);
        uBit.display.print(' ');

                    // -- Morse Code -- //
            //print morse results
        // if (uBit.buttonB.isPressed() && uBit.buttonA.isPressed()){
        //     primaryOut = mc->getStored(true);
        //     DMESGF("result P");
        //     for(auto& i : primaryOut){
        //         DMESGF("%c", (char) i);
        //     }
        //     primaryOut = mc->getStored(false);
        //     DMESGF("result S");
        //     for(auto& i : primaryOut){
        //         DMESGF("%c", (char) i);
        //     }
        // }

            // play sos or abcdef on morse 
        // if (uBit.buttonA.isPressed()){
        //     uBit.sleep(1000);
        //     mc->playChar('A', true);
        //     mc->playChar('B', true);
        //     mc->playChar('C', true);
        //     mc->playString("DEF", true);
        // }
        // else if (uBit.buttonB.isPressed()){
        //     uBit.sleep(1000);
        //     mc->playChar('S', true);
        //     mc->playChar('O', true);
        //     mc->playChar('S', true);
        // }

                    // -- Tap Detector -- //

        // if (uBit.buttonA.isPressed()){
        //     uBit.audio.tap->recordSequence('A');
        // }

        // if (uBit.buttonB.isPressed()){
        //     uBit.audio.tap->recordSequence('B');
        // }

            //helps timing
        // if(toggle){
        //     toggle = false;
        //     uBit.display.print(' ');
        // }
        // else if(!toggle){
        //     toggle = true;
        //     uBit.display.print('X');
        // }
        
        // if(lastChar!=mc->getLastChar(true)){
        //     lastChar = mc->getLastChar(true);
        //     uBit.display.print(lastChar);
        // }

                    // -- FFT  -- //

            //Example HTTP request function
        // if(lastChar!=uBit.audio.fft->getClosestNote()){
        //     lastChar = uBit.audio.fft->getClosestNote();
        //     if(lastChar != 'E')
        //         uBit.display.print(' ');
        //     else if(lastChar == 'E'){
        //         uBit.display.print('E');
        //         uBit.sleep(400);
        //         uBit.audio.fft->playFrequency(440, 300);
        //     }
        // }

            // event alternative 
        // if(lastChar!=uBit.audio.fft->getSecondaryNote()){
        //     lastChar = uBit.audio.fft->getSecondaryNote();
        //     if(lastChar == 'X')
        //         uBit.display.print(' ');
        //     else
        //         uBit.display.print(lastChar);
        // }

            //Print out all stats
        // DMESGF("P---P");
        // DMESGF("%c", uBit.audio.fft->getClosestNote());
        //DMESGF("%d", (int) uBit.audio.fft->getFrequency());
        // DMESGF("S---S");
        // DMESGF("%c", uBit.audio.fft->getSecondaryNote());
        // DMESGF("%d", (int) uBit.audio.fft->getSecondaryFrequency());

            //Display closest note on screen
        uBit.display.print(fft->getClosestNote());

    }
}



int 
main()
{

    uBit.init();

    fft_test();

    
}
