/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSUUID, NSPNetworkAgent;

@interface NPKey : NSObject {

	unsigned _session_counter;
	NSData* _info;
	NSUUID* _uuid;

}

@property (assign) unsigned session_counter;                     //@synthesize session_counter=_session_counter - In the implementation block
@property (retain) NSData * info;                                //@synthesize info=_info - In the implementation block
@property (retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSPNetworkAgent * agentForKey; 
-(unsigned)session_counter;
-(void)setSession_counter:(unsigned)arg1 ;
-(NSPNetworkAgent *)agentForKey;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(NSData *)info;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)setInfo:(NSData *)arg1 ;
@end

