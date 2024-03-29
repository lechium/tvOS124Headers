/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOTransitPlaceCard;

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {

	unsigned long long _animationID;
	unsigned long long _businessID;
	long long _placeID;
	double _searchResponseRelativeTimestamp;
	unsigned long long _targetID;
	NSString* _actionUrl;
	NSString* _destinationApp;
	int _localSearchProviderID;
	NSString* _photoId;
	int _resultIndex;
	NSString* _richProviderId;
	GEOTransitPlaceCard* _transitPlaceCard;
	SCD_Struct_GE75 _has;

}

@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                        //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceID; 
@property (assign,nonatomic) long long placeID;                                    //@synthesize placeID=_placeID - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                            //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) BOOL hasSearchResponseRelativeTimestamp; 
@property (assign,nonatomic) double searchResponseRelativeTimestamp;               //@synthesize searchResponseRelativeTimestamp=_searchResponseRelativeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) int resultIndex;                                      //@synthesize resultIndex=_resultIndex - In the implementation block
@property (assign,nonatomic) BOOL hasAnimationID; 
@property (assign,nonatomic) unsigned long long animationID;                       //@synthesize animationID=_animationID - In the implementation block
@property (assign,nonatomic) BOOL hasTargetID; 
@property (assign,nonatomic) unsigned long long targetID;                          //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotoId; 
@property (nonatomic,retain) NSString * photoId;                                   //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,readonly) BOOL hasActionUrl; 
@property (nonatomic,retain) NSString * actionUrl;                                 //@synthesize actionUrl=_actionUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitPlaceCard; 
@property (nonatomic,retain) GEOTransitPlaceCard * transitPlaceCard;               //@synthesize transitPlaceCard=_transitPlaceCard - In the implementation block
@property (nonatomic,readonly) BOOL hasRichProviderId; 
@property (nonatomic,retain) NSString * richProviderId;                            //@synthesize richProviderId=_richProviderId - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationApp; 
@property (nonatomic,retain) NSString * destinationApp;                            //@synthesize destinationApp=_destinationApp - In the implementation block
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 ;
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8 ;
+(id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
+(id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
+(id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9 ;
+(id)actionDetailsWithTargetID:(unsigned long long)arg1 ;
+(id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultIndex;
-(BOOL)hasResultIndex;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setPhotoId:(NSString *)arg1 ;
-(BOOL)hasPhotoId;
-(NSString *)photoId;
-(void)setResultIndex:(int)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(unsigned long long)businessID;
-(void)setRichProviderId:(NSString *)arg1 ;
-(void)setAnimationID:(unsigned long long)arg1 ;
-(void)setActionUrl:(NSString *)arg1 ;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(void)setPlaceID:(long long)arg1 ;
-(void)setHasPlaceID:(BOOL)arg1 ;
-(BOOL)hasPlaceID;
-(long long)placeID;
-(void)setTransitPlaceCard:(GEOTransitPlaceCard *)arg1 ;
-(void)setDestinationApp:(NSString *)arg1 ;
-(void)setSearchResponseRelativeTimestamp:(double)arg1 ;
-(void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSearchResponseRelativeTimestamp;
-(void)setHasAnimationID:(BOOL)arg1 ;
-(BOOL)hasAnimationID;
-(void)setTargetID:(unsigned long long)arg1 ;
-(void)setHasTargetID:(BOOL)arg1 ;
-(BOOL)hasTargetID;
-(BOOL)hasActionUrl;
-(BOOL)hasTransitPlaceCard;
-(BOOL)hasRichProviderId;
-(BOOL)hasDestinationApp;
-(double)searchResponseRelativeTimestamp;
-(unsigned long long)animationID;
-(unsigned long long)targetID;
-(NSString *)actionUrl;
-(GEOTransitPlaceCard *)transitPlaceCard;
-(NSString *)richProviderId;
-(NSString *)destinationApp;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 ;
-(id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9 ;
-(id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

