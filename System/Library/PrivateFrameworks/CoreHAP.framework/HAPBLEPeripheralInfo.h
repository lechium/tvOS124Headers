/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSString, NSData;

@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding> {

	NSUUID* _peripheralUUID;
	unsigned long long _advertisedProtocolVersion;
	unsigned long long _previousProtocolVersion;
	unsigned long long _resumeSessionId;
	double _lastSeen;
	NSNumber* _statusFlags;
	NSNumber* _stateNumber;
	NSNumber* _configNumber;
	NSNumber* _categoryIdentifier;
	NSString* _accessoryName;
	NSData* _broadcastKey;
	double _keyUpdatedTime;
	NSNumber* _keyUpdatedStateNumber;

}

@property (assign,nonatomic) unsigned long long advertisedProtocolVersion;              //@synthesize advertisedProtocolVersion=_advertisedProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long previousProtocolVersion;                //@synthesize previousProtocolVersion=_previousProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long resumeSessionId;                        //@synthesize resumeSessionId=_resumeSessionId - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSString * accessoryName;                                  //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSData * broadcastKey;                                     //@synthesize broadcastKey=_broadcastKey - In the implementation block
@property (assign,nonatomic) double keyUpdatedTime;                                     //@synthesize keyUpdatedTime=_keyUpdatedTime - In the implementation block
@property (nonatomic,retain) NSNumber * keyUpdatedStateNumber;                          //@synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber - In the implementation block
@property (nonatomic,readonly) NSUUID * peripheralUUID;                                 //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (nonatomic,readonly) double lastSeen;                                         //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,readonly) NSNumber * statusFlags;                                  //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,readonly) NSNumber * configNumber;                                 //@synthesize configNumber=_configNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * categoryIdentifier;                           //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)statusFlags;
-(double)lastSeen;
-(unsigned long long)advertisedProtocolVersion;
-(void)setPreviousProtocolVersion:(unsigned long long)arg1 ;
-(void)setAdvertisedProtocolVersion:(unsigned long long)arg1 ;
-(void)setResumeSessionId:(unsigned long long)arg1 ;
-(NSUUID *)peripheralUUID;
-(unsigned long long)previousProtocolVersion;
-(unsigned long long)resumeSessionId;
-(id)initWithPeripheralInfo:(id)arg1 advertisedProtocolVersion:(unsigned long long)arg2 previousProtocolVersion:(long long)arg3 resumeSessionId:(unsigned long long)arg4 lastSeen:(double)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 categoryIdentifier:(id)arg9 accessoryName:(id)arg10 ;
-(void)updateProtocolVersion:(unsigned long long)arg1 ;
-(void)updateResumeSessionId:(unsigned long long)arg1 ;
-(void)updateStateNumber:(id)arg1 ;
-(void)saveBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 updatedTime:(double)arg3 ;
-(void)updateBroadcastKey:(id)arg1 ;
-(void)updateAccessoryName:(id)arg1 ;
-(NSNumber *)stateNumber;
-(NSString *)accessoryName;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)configNumber;
-(NSData *)broadcastKey;
-(double)keyUpdatedTime;
-(NSNumber *)keyUpdatedStateNumber;
-(void)setBroadcastKey:(NSData *)arg1 ;
-(void)setKeyUpdatedStateNumber:(NSNumber *)arg1 ;
-(void)setKeyUpdatedTime:(double)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)categoryIdentifier;
@end
