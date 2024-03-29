/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * siriRemoteInputIdentifier; 
@property (readonly) unsigned long long siriInputSource; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
-(NSArray *)outputs;
-(NSArray *)inputs;
-(RouteDescriptionImpl*)privateGetImplementation;
-(id)initWithRawDescription:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)siriRemoteInputIdentifier;
-(unsigned long long)siriInputSource;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

