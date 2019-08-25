/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MPCluster : NSObject {

	NSMutableArray* mSlides;
	NSMutableSet* mPathsInCluster;
	NSString* mName;
	double mRating;
	NSMutableDictionary* mUsageCounterPerLayer;

}

@property (retain) NSMutableArray * items; 
@property (copy) NSString * name; 
@property (assign) double rating; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
-(double)rating;
-(void)detailedDescription;
-(void)setRating:(double)arg1 ;
-(void)removeAllSlides;
-(id)allSlides;
-(long long)slideCount;
-(void)setUsageCountForLayer:(id)arg1 to:(double)arg2 ;
-(id)usageCountDescription;
-(void)addSlide:(id)arg1 ;
-(id)allSlidesSortedByUser;
-(BOOL)clusterContainsSlideAtPath:(id)arg1 ;
-(id)allSlidesSortedChronologically;
-(double)usageCountForLayer:(id)arg1 ;
-(void)resetAllUsageCounters;
-(NSMutableDictionary *)usageCounterPerLayer;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
@end

