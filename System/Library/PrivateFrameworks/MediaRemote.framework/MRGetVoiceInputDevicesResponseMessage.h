/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (nonatomic,readonly) long long errorCode; 
-(long long)errorCode;
-(id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2 ;
-(NSArray *)deviceIDs;
-(unsigned long long)type;
@end

