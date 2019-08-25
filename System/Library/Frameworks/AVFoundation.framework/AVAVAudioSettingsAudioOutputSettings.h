/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAudioOutputSettings.h>
#import <AVFoundation/AVReencodedAudioSettingsForFig.h>
#import <AVFoundation/AVDecodedAudioSettingsForFig.h>

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(BOOL)willYieldCompressedSamples;
-(void)getAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 forAudioFileTypeID:(unsigned)arg2 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg3 ;
-(AudioChannelLayout*)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 audioChannelLayoutSize:(unsigned long long*)arg2 ;
-(id)audioOptions;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithTrustedAVAudioSettingsDictionary:(id)arg1 ;
-(id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

