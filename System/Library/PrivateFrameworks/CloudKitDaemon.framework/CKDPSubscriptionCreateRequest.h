/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying> {

	CKDPSubscription* _subscription;

}

@property (nonatomic,readonly) BOOL hasSubscription; 
@property (nonatomic,retain) CKDPSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasSubscription;
-(CKDPSubscription *)subscription;
-(void)setSubscription:(CKDPSubscription *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

