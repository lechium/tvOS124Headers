/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary, NSArray;

@interface CATSessionMessageResumed : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _serverUserInfo;
	NSArray* _pendingRemoteTaskUUIDs;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                          //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * serverUserInfo;                 //@synthesize serverUserInfo=_serverUserInfo - In the implementation block
@property (nonatomic,copy) NSArray * pendingRemoteTaskUUIDs;              //@synthesize pendingRemoteTaskUUIDs=_pendingRemoteTaskUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionUUID;
-(id)initWithSessionUUID:(id)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSArray *)pendingRemoteTaskUUIDs;
-(NSDictionary *)serverUserInfo;
-(void)setServerUserInfo:(NSDictionary *)arg1 ;
-(void)setPendingRemoteTaskUUIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
