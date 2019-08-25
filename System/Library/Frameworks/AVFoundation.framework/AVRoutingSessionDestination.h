/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVRoutingSessionDestinationInternal, NSArray;

@interface AVRoutingSessionDestination : NSObject {

	AVRoutingSessionDestinationInternal* _ivars;

}

@property (nonatomic,readonly) NSArray * outputDeviceDescriptions; 
@property (nonatomic,readonly) float probability; 
@property (nonatomic,readonly) BOOL providesExternalVideoPlayback; 
-(BOOL)providesExternalVideoPlayback;
-(float)probability;
-(id)initWithFigRoutingSessionDestination:(const CFDictionaryRef)arg1 ;
-(BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id*)arg1 ;
-(NSArray *)outputDeviceDescriptions;
-(id)init;
-(void)dealloc;
-(id)description;
@end

