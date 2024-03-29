/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject {

	NSData* _relayIP;
	NSNumber* _relayPort;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	NSData* _relaySessionID;
	NSNumber* _relayCombinedSoftwareID;
	NSData* _appleID;

}

@property (copy) NSData * relayIP;                                //@synthesize relayIP=_relayIP - In the implementation block
@property (copy) NSNumber * relayPort;                            //@synthesize relayPort=_relayPort - In the implementation block
@property (copy) NSData * relaySessionToken;                      //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (copy) NSData * relaySessionKey;                        //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (copy) NSData * relaySessionID;                         //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (copy) NSNumber * relayCombinedSoftwareID;              //@synthesize relayCombinedSoftwareID=_relayCombinedSoftwareID - In the implementation block
@property (copy) NSData * appleID;                                //@synthesize appleID=_appleID - In the implementation block
-(NSData *)relaySessionID;
-(BOOL)_isSessionInfoValid:(id)arg1 ;
-(void)_setAllValuesFromDictionary:(id)arg1 ;
-(id)_parseQuickRelayDefaults;
-(void)setRelayIP:(NSData *)arg1 ;
-(void)setRelayPort:(NSNumber *)arg1 ;
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(void)setRelaySessionID:(NSData *)arg1 ;
-(void)setRelayCombinedSoftwareID:(NSNumber *)arg1 ;
-(id)initWithDefaults;
-(NSData *)relayIP;
-(NSNumber *)relayPort;
-(NSNumber *)relayCombinedSoftwareID;
-(NSData *)appleID;
-(void)setAppleID:(NSData *)arg1 ;
-(NSData *)relaySessionToken;
-(NSData *)relaySessionKey;
-(id)initWithDictionary:(id)arg1 ;
@end

