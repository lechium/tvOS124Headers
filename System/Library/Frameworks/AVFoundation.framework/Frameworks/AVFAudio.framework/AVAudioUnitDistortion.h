/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (assign,nonatomic) float preGain; 
@property (assign,nonatomic) float wetDryMix; 
-(void)setWetDryMix:(float)arg1 ;
-(float)wetDryMix;
-(void)loadFactoryPreset:(long long)arg1 ;
-(AUPreset*)FillOutAUPreset:(long long)arg1 ;
-(void)setPreGain:(float)arg1 ;
-(float)preGain;
-(id)init;
@end
