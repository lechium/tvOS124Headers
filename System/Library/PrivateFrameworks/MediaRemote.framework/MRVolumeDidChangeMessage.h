/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(NSString *)outputDeviceUID;
-(NSString *)endpointUID;
-(id)initWithVolume:(float)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
-(float)volume;
-(unsigned long long)type;
@end

