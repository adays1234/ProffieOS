#ifdef CONFIG_TOP
#include "v3_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 2200
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.9
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_POWER_FOR_ID PowerPINS<bladePowerPin1, bladePowerPin2, bladePowerPin3>
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
  // Default, Obiwan Style blade style. DeepSkyBlue with Yellow clashing
  { "Balance", "tracks/venus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<AudioFlicker<DeepSkyBlue,WHITE>,LemonChiffon,150>,Rgb<250,250,80>,150,100,400>,BrownNoiseFlicker<DeepSkyBlue,Rgb<250,250,80>,40>,AudioFlicker<OnSpark<DeepSkyBlue,Rgb<255,255,125>,200>,Rgb<250,250,80>>>,Rgb<250,250,80>,40>,150,400,Black>>(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<DeepSkyBlue, WHITE >, WHITE>, 100, 300> >(), "obiwan1"},

  // Green 1
  { "RotJ", "tracks/venus.wav",
    StylePtr<InOutHelper<SimpleClash<Lockup<Blast<OnSpark<AudioFlicker<Rgb<0,100,0>,YELLOW>,LemonChiffon,150>,Rgb<250,250,80>,150,100,400>,BrownNoiseFlicker<Rgb<0,100,0>,Rgb<250,250,80>,40>,AudioFlicker<OnSpark<Rgb<0,100,0>,Rgb<255,255,125>,200>,Rgb<250,250,80>>>,Rgb<250,250,80>,40>,150,400,Black>>(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<Rgb<0,100,0>, YELLOW >, WHITE>, 100, 300> >(), "luke1"},

  { "DrkKyber", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<OrangeRed, DarkOrange >, Yellow>, 300, 800> >(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<OrangeRed, DarkOrange >, Yellow>, 300, 800> >(), "sith1"},

  { "TheLight", "tracks/uranus.wav",
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<Rgb<148,0,211>, MAGENTA >, Yellow>, 300, 800> >(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<Rgb<148,0,211>, MAGENTA >, Yellow>, 300, 800> >(), "mace1"},

  { "KrsGuard","tracks/uranus.wav",
    StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<600>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,300>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<0,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<BrownNoiseFlicker<Red,Rgb<25,0,0>,300>,Rgb<128,0,0>,0,8,FireConfig<10,1200,1>,FireConfig<0,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,StyleFire<Red,Rgb<150,150,150>,0,6>,TrInstant,TrSmoothFade<800>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,BrownNoiseFlicker<White,Red,400>,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<BrownNoiseFlicker<Red,RandomPerLEDFlicker<Rgb<25,0,0>,Rgb<60,0,0>>,200>,Rgb<80,0,0>,0,6,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Mix<Bump<Int<0>,Int<44000>>,Mix<Bump<Int<32768>,Int<44000>>,TransitionEffect<Red,White,TrInstant,TrFade<300>,EFFECT_LOCKUP_END>,Stripes<1000,-1500,Red,BrownNoiseFlicker<White,Red,300>>>,Stripes<1000,1500,Red,BrownNoiseFlicker<White,Red,300>>>,TrInstant,TrSmoothFade<800>,EFFECT_LOCKUP_END>,Pulsing<Gradient<BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,BrownNoiseFlicker<Red,Rgb<25,0,0>,400>>,3500>,RandomPerLEDFlicker<BrownNoiseFlicker<Red,Rgb<25,0,0>,400>,White>,Bump<Int<16000>,Int<16000>>,Bump<Int<32768>,Int<10000>>>,White>,White>,150,300,Black>>(),
    StylePtr<InOutHelper<StyleFire<Rgb<255,0,0>,Rgb<255,80,0>,0,8,FireConfig<0,2000,0>,FireConfig<5000,5000,0>,FireConfig<0,5000,0>,FireConfig<100,0,50>>,200,300,Black>>(), "kylo1"},

  { "Graflex8", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<CYAN, WHITE >, WHITE>, 300, 800> >(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<CYAN, WHITE >, WHITE>, 300, 800> >(), "cyanflicker"},

  { "RgVader", "RgVader/extras/march.wav",
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<RED, OrangeRed >, Yellow>, 300, 800> >(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<RED, OrangeRed >, Yellow>, 300, 800> >(), "vader1"},

  { "RotJ", "tracks/venus.wav",
    StylePtr<InOutHelper<OnSpark<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,145,0>>,BrownNoiseFlicker<DarkOrange,Red,75>,300,150,400>,BrownNoiseFlicker<Green,LemonChiffon,75>,BrownNoiseFlicker<Green,Orange,100>>,BrownNoiseFlicker<Green,DarkOrange,30>,80>,DarkOrange,250>,200,800,Black>>(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<Rgb<0,100,0>, YELLOW >, WHITE>, 100, 300> >(), "luke2"},

  { "SmthGrey", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<DarkOrange, Yellow >, Red>, 300, 800> >(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<DarkOrange, Yellow >, Red>, 300, 800> >(), "orangeflicker"},

  { "DrkKyber", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<DarkOrange, Red >, Yellow>, 300, 800> >(),
    StylePtr<InOutSparkTip<EasyBlade<AudioFlicker<DarkOrange, Red >, Yellow>, 300, 800> >(), "sith2"},

  { "SmthJedi", "tracks/mars.wav",
    &style_charging,
    StyleNormalPtr<BLACK, BLACK, 300, 800>(), "Battery\nLevel"}
};

BladeConfig blades[] = {
 { 10000, WS2811BladePtr<125, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
   WS2811BladePtr<14, WS2811_ACTUALLY_800kHz | WS2811_GRB, 7, PowerPINS<bladePowerPin6> >(),
   CONFIGARRAY(presets) },
};

#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
