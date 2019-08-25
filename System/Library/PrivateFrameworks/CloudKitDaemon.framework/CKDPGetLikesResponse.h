/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLikeInfo, NSMutableArray;

@interface CKDPGetLikesResponse : PBCodable <NSCopying> {

	CKDPLikeInfo* _likeInfo;
	NSMutableArray* _likes;

}

@property (nonatomic,readonly) BOOL hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;              //@synthesize likeInfo=_likeInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * likes;               //@synthesize likes=_likes - In the implementation block
+(Class)likeType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(BOOL)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(void)addLike:(id)arg1 ;
-(unsigned long long)likesCount;
-(void)clearLikes;
-(id)likeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)likes;
-(void)setLikes:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
