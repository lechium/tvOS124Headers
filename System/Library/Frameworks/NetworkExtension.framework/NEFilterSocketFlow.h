/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWEndpoint, NSUUID;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	sockaddr_storage _lastLocalAddress;
	sockaddr_storage _lastRemoteAddress;
	int _socketFamily;
	int _socketType;
	int _socketProtocol;
	NWEndpoint* _remoteEndpoint;
	NWEndpoint* _localEndpoint;
	NSUUID* _uuid;
	NSUUID* _euuid;
	unsigned long long _socketID;

}

@property (nonatomic,copy) NSUUID * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSUUID * euuid;                   //@synthesize euuid=_euuid - In the implementation block
@property (copy) NWEndpoint * localEndpoint;                 //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (copy) NWEndpoint * remoteEndpoint;                //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (assign) unsigned long long socketID;              //@synthesize socketID=_socketID - In the implementation block
@property (assign) int socketFamily;                         //@synthesize socketFamily=_socketFamily - In the implementation block
@property (assign) int socketType;                           //@synthesize socketType=_socketType - In the implementation block
@property (assign) int socketProtocol;                       //@synthesize socketProtocol=_socketProtocol - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSocketID:(unsigned long long)arg1 ;
-(void)setEuuid:(NSUUID *)arg1 ;
-(void)setSocketFamily:(int)arg1 ;
-(void)setSocketType:(int)arg1 ;
-(void)setSocketProtocol:(int)arg1 ;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(int)socketFamily;
-(int)socketType;
-(int)socketProtocol;
-(NWEndpoint *)localEndpoint;
-(NWEndpoint *)remoteEndpoint;
-(unsigned long long)socketID;
-(id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 socketID:(unsigned long long)arg8 ;
-(void)lastRemoteAddress:(sockaddr*)arg1 ;
-(void)lastLocalAddress:(sockaddr*)arg1 ;
-(NSUUID *)euuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

