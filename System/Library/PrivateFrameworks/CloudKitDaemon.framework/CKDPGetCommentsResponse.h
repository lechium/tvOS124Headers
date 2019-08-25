/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, CKDPCommentSummary;

@interface CKDPGetCommentsResponse : PBCodable <NSCopying> {

	NSMutableArray* _comments;
	NSData* _continuationMarker;
	CKDPCommentSummary* _summary;
	int _totalCount;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasTotalCount; 
@property (assign,nonatomic) int totalCount;                            //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;               //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (nonatomic,readonly) BOOL hasSummary; 
@property (nonatomic,retain) CKDPCommentSummary * summary;              //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSMutableArray * comments;                 //@synthesize comments=_comments - In the implementation block
+(Class)commentsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setComments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)comments;
-(CKDPCommentSummary *)summary;
-(void)setSummary:(CKDPCommentSummary *)arg1 ;
-(int)totalCount;
-(void)setTotalCount:(int)arg1 ;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(BOOL)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)addComments:(id)arg1 ;
-(unsigned long long)commentsCount;
-(void)clearComments;
-(id)commentsAtIndex:(unsigned long long)arg1 ;
-(void)setHasTotalCount:(BOOL)arg1 ;
-(BOOL)hasTotalCount;
-(BOOL)hasSummary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

