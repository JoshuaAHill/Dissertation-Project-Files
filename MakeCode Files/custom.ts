namespace soundBlocks {
    
    /**
     * Record clip
     */
    //% block="Record sound clip"
    //% weight=80
    //% group="Recording API"
    export function record() {
        sound.__record()
    }

    /**
     * Playback clip
     */
    //% block="Playback sound clip"
    //% weight=70
    //% group="Recording API"
    export function playback() {
        sound.__playback()
    }


    /**
     * Start recording
     */
    //% block="Start Frequency Recognition"
    //% weight=65
    //% group="Frequency Detection"
    export function startRecording() {
        sound.__startRecording();
    }

    /**
     * Stop recording
     */
    //% block="Stop Frequency Recognition"
    //% weight=65
    export function stopRecording() {
        sound.__stopRecording();
    }

    /**
     * Get Closest Note
     */
    //% block="Get Closest Primary Note"
    //% weight=60
    //% group="Frequency Detection"
    export function getClosestNote(): string {
        let myString = String.fromCharCode(sound.__getClosestNote());
        return myString;
    }

    /**
     * Get Closest Freq
     */
    //% block="Get Closest Primary Freq"
    //% weight=60
    //% group="Frequency Detection"
    export function getClosestFreq(): number {
        return sound.__getClosestFreq();
    }

    /**
     * Get Closest Secondary Note
     */
    //% block="Get Closest Secondary Note"
    //% weight=60
    //% group="Frequency Detection"
    export function getClosestSecondaryNote(): string {
        let myString = String.fromCharCode(sound.__getClosestSecondaryNote());
        return myString;
    }

    /**
     * Get Closest Secondary Freq
     */
    //% block="Get Closest Secondary Freq"
    //% weight=60
    //% group="Frequency Detection"
    export function getClosestSecondaryFreq(): number {
        return sound.__getClosestSecondaryFreq();
    }

    /**
     * Play Frequency
     */
    //% block="Play Frequency %freq for %time ms"
    //% weight=60
    //% group="Frequency Detection"
    //% freq.min=150 freq.max=590 freq.defl=440
    //% time.min=100 time.max=9000 time.defl=1000
    export function playFrequency(freq : number, time : number) {
         sound.__playFrequency(freq, time);
    }


    /**
     * On A Heard
     */
    //% block="On Hearing A"
    //% weight=60
    //% group="Frequency Detection"
    export function onNoteA(body: () => void): void {
        sound.__onNoteA(body);
        let i = 0;
        while(i<2000){
            i++;
        }
    }

    /**
     * On E Heard
     */
    //% block="On Hearing E"
    //% weight=60
    //% group="Frequency Detection"
    export function onNoteE(body: () => void): void {
        sound.__onNoteE(body);
        let i = 0;
        while(i<2000){
            i++;
        }
    }

    /**
     * Start Morse
     */
    //% block="Start Morse With Unit Length %unitLength"
    //% weight=50
    //% group="Morse Code"
    //% unitLength.min=100 unitLength.max=500 unitLength.defl=250
    export function startMorse(unitLength : number) {
        sound.__startRecognition();
    }

    /**
     * Stop Morse
     */
    //% block="Stop Morse"
    //% weight=50
    //% group="Morse Code"
    export function stopMorse() {
        sound.__stopRecognition();
    }

    /**
     * play String
     */
    //% block="play String %str - primary? %primary"
    //% weight=50
    //% group="Morse Code"
    export function playString(str: string, primary : boolean) {
        sound.__playString(str, primary);
    }

    /**
     * getLastChar
     */
    //% block="Get Last Morse Char - primary? %primary"
    //% weight=50
    //% group="Morse Code"
    export function getLastChar(primary : boolean): string {
        let myString = String.fromCharCode(sound.__getLastChar(primary));
        return myString;
    }

    /**
     * Clear stored Morse
     */
    //% block="Clear stored Morse - primary? %primary"
    //% weight=50
    //% group="Morse Code"
    export function clearStored(primary : boolean) {
        sound.__clearStored(primary);
    }

    /**
     * Get Stored String
     */
    //% block="Get stored String - primary? %primary"
    //% weight=50
    //% group="Morse Code"
    export function getStored(primary : boolean) : string{
        return sound.__getStored(primary);
    }

    export class Pattern{

    }

    /**
     * Record Pattern
     */
    //% block="Record Pattern %name"
    //% weight=50
    //% group="Tap Detector"
    export function recordPattern(name: string) : Pattern{
        //Placeholder
        return new Pattern();
    }

    /**
     * Get Pattern
     */
    //% block="Pattern %name"
    //% weight=50
    //% group="Tap Detector"
    export function pattern(name: string) : Pattern{
        //Placeholder
        return new Pattern();
    }

    /**
     * On Pattern Detected
     */
    //% block="On Detecting Pattern %pat"
    //% weight=40
    //% group="Tap Detector"
    export function onDetectingPattern(pat: Pattern, body: () => void): void {
        //Placeholder
    }


}