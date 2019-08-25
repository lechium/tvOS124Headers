/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSInvestigationInterviewDelegate.h>

@class NSMutableSet, NSSet, NSDate, NSString;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate> {

	unsigned long long _locationClusteringAlgorithm;
	BOOL _allowsInterview;
	NSMutableSet* _focusItems;
	NSSet* _focusPeopleUUIDs;

}

@property (nonatomic,readonly) NSMutableSet * focusItems;                                 //@synthesize focusItems=_focusItems - In the implementation block
@property (nonatomic,retain) NSSet * focusPeopleUUIDs;                                    //@synthesize focusPeopleUUIDs=_focusPeopleUUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long locationClusteringAlgorithm;              //@synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm - In the implementation block
@property (assign,nonatomic) BOOL allowsInterview;                                        //@synthesize allowsInterview=_allowsInterview - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)approximateLocation;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(NSSet *)focusPeopleUUIDs;
-(unsigned long long)locationClusteringAlgorithm;
-(NSMutableSet *)focusItems;
-(void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(/*^block*/id)arg2 ;
-(id)_prepareFeederWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsInterview;
-(CGImageRef)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInInvestigation:(id)arg1 ;
-(CGImageRef)itemThumbnailInInvestigation:(id)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3 ;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setAllowsInterview:(BOOL)arg1 ;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(void)setLocationClusteringAlgorithm:(unsigned long long)arg1 ;
-(void)setFocusPeopleUUIDs:(NSSet *)arg1 ;
-(id)startDateComponents;
-(id)endDateComponents;
-(id)init;
-(unsigned long long)numberOfItems;
@end

