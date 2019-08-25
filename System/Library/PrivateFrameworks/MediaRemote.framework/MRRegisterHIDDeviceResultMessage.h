/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic,readonly) long long errorCode; 
@property (nonatomic,readonly) unsigned long long deviceIdentifier; 
-(long long)errorCode;
-(unsigned long long)deviceIdentifier;
-(id)initWithErrorCode:(long long)arg1 deviceIdentifier:(unsigned long long)arg2 ;
-(unsigned long long)type;
@end
