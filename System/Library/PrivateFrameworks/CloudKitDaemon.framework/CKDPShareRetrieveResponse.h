/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPShareRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _shares;

}

@property (nonatomic,retain) NSMutableArray * shares;              //@synthesize shares=_shares - In the implementation block
+(Class)shareType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addShare:(id)arg1 ;
-(unsigned long long)sharesCount;
-(void)clearShares;
-(id)shareAtIndex:(unsigned long long)arg1 ;
-(void)setShares:(NSMutableArray *)arg1 ;
-(NSMutableArray *)shares;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

