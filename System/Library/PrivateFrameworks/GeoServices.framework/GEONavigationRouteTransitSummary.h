/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {

	NSMutableArray* _possibleStops;
	NSMutableArray* _scheduledLinks;

}

@property (nonatomic,retain) NSMutableArray * scheduledLinks;              //@synthesize scheduledLinks=_scheduledLinks - In the implementation block
@property (nonatomic,retain) NSMutableArray * possibleStops;               //@synthesize possibleStops=_possibleStops - In the implementation block
+(Class)scheduledLinkType;
+(Class)possibleStopType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(void)addScheduledLink:(id)arg1 ;
-(void)addPossibleStop:(id)arg1 ;
-(unsigned long long)scheduledLinksCount;
-(void)clearScheduledLinks;
-(id)scheduledLinkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)possibleStopsCount;
-(void)clearPossibleStops;
-(id)possibleStopAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)scheduledLinks;
-(void)setScheduledLinks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)possibleStops;
-(void)setPossibleStops:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

