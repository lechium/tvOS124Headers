/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long distanceAttenuationModel; 
@property (assign,nonatomic) float referenceDistance; 
@property (assign,nonatomic) float maximumDistance; 
@property (assign,nonatomic) float rolloffFactor; 
-(void)setDistanceAttenuationModel:(long long)arg1 ;
-(long long)distanceAttenuationModel;
-(float)referenceDistance;
-(void)setRolloffFactor:(float)arg1 ;
-(float)rolloffFactor;
-(float)maximumDistance;
-(void)setMaximumDistance:(float)arg1 ;
-(void)setReferenceDistance:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
@end

