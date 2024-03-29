/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata;

@interface MKLocalSearchCompletion : NSObject {

	id<GEOCompletionItem> _item;
	NSString* _sourceID;
	NSString* _localizedSectionHeader;
	MKMapItem* _mapItem;
	BOOL _alreadySentFeedback;
	BOOL _shouldDisplayNoResults;
	MKLocalSearchCompletion* _directionIntentOrigin;
	MKLocalSearchCompletion* _directionIntentDestination;

}

@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem; 
@property (getter=_alreadySentFeedback,nonatomic,readonly) BOOL alreadySentFeedback;                                  //@synthesize alreadySentFeedback=_alreadySentFeedback - In the implementation block
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) GEOSearchCategory * category; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolved; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentOrigin;                                         //@synthesize directionIntentOrigin=_directionIntentOrigin - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentDestination;                                    //@synthesize directionIntentDestination=_directionIntentDestination - In the implementation block
@property (nonatomic,readonly) GEORetainedSearchMetadata * retainedSearchMetadata; 
@property (nonatomic,readonly) BOOL hasSortPriority; 
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,copy) NSString * sourceID;                                                                       //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;                                                         //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (getter=_type,nonatomic,readonly) long long type; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_hasDisambiguationRadiusMeters,nonatomic,readonly) BOOL hasDisambiguationRadiusMeters; 
@property (getter=_disambiguationRadiusMeters,nonatomic,readonly) float disambiguationRadiusMeters; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * titleHighlightRanges; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSArray * subtitleHighlightRanges; 
-(GEODirectionIntent *)directionIntent;
-(MKMapItem *)mapItem;
-(int)_placeType;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(NSString *)localizedSectionHeader;
-(id)queryLine;
-(GEOResolvedItem *)clientResolved;
-(BOOL)hasSortPriority;
-(long long)sortPriority;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)calloutTitle;
-(BOOL)getCoordinate:(CLLocationCoordinate2D*)arg1 ;
-(void)sendFeedback;
-(NSArray *)displayLines;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(id<GEOCompletionItem>)geoCompletionItem;
-(BOOL)_alreadySentFeedback;
-(id)initWithGeoCompletionItem:(id)arg1 ;
-(NSArray *)titleHighlightRanges;
-(NSArray *)subtitleHighlightRanges;
-(id)copyStorage;
-(float)_disambiguationRadiusMeters;
-(BOOL)_hasDisambiguationRadiusMeters;
-(id)iconWithScale:(double)arg1 ;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(MKLocalSearchCompletion *)directionIntentOrigin;
-(void)setDirectionIntentOrigin:(MKLocalSearchCompletion *)arg1 ;
-(MKLocalSearchCompletion *)directionIntentDestination;
-(void)setDirectionIntentDestination:(MKLocalSearchCompletion *)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSString *)subtitle;
-(long long)_type;
-(GEOSearchCategory *)category;
@end

