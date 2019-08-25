/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CLSTimeZones : NSObject {

	NSArray* _timeZonesDB;

}

@property (nonatomic,retain) NSArray * timeZonesDB;              //@synthesize timeZonesDB=_timeZonesDB - In the implementation block
+(id)sharedInstance;
-(void)invalidateCaches;
-(NSArray *)timeZonesDB;
-(id)closestZoneInfoWithLocation:(id)arg1 source:(id)arg2 ;
-(id)timeZoneWithDictionary:(id)arg1 ;
-(id)timeZoneWithLocation:(id)arg1 ;
-(id)filteredTimeZonesWithCountyCode:(id)arg1 ;
-(id)_importDataBaseFromFile:(id)arg1 ;
-(id)timeZoneWithLocation:(id)arg1 countryCode:(id)arg2 ;
-(void)setTimeZonesDB:(NSArray *)arg1 ;
@end

