/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _DKPRChangeSet : PBCodable <NSCopying> {

	NSMutableArray* _deleteEventIDs;
	NSMutableArray* _events;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteEventIDs;              //@synthesize deleteEventIDs=_deleteEventIDs - In the implementation block
+(Class)deleteEventIDType;
+(Class)eventsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setDeleteEventIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteEventIDs;
-(void)addDeleteEventID:(id)arg1 ;
-(unsigned long long)deleteEventIDsCount;
-(void)clearDeleteEventIDs;
-(id)deleteEventIDAtIndex:(unsigned long long)arg1 ;
-(void)addEvents:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

