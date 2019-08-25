/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTMediaPlaylist.h>

@class NSArray, NSMutableArray, NSString;

@interface MTHLSVideoPlaylist : NSObject <MTMediaPlaylist> {

	unsigned long long _startPosition;
	NSMutableArray* _rollItems;
	NSArray* _mainFeatureMetricsData;

}

@property (assign,nonatomic) unsigned long long startPosition;              //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,retain) NSMutableArray * rollItems;                    //@synthesize rollItems=_rollItems - In the implementation block
@property (nonatomic,retain) NSArray * mainFeatureMetricsData;              //@synthesize mainFeatureMetricsData=_mainFeatureMetricsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * eventData; 
-(void)setMainFeatureMetricsData:(NSArray *)arg1 ;
-(void)addRollInfoItem:(id)arg1 ;
-(void)addRollItemWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(void)addRollItem:(id)arg1 ;
-(long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)arg1 ;
-(id)mainFeatureItemWithStartOverallPosition:(unsigned long long)arg1 ;
-(NSMutableArray *)rollItems;
-(NSArray *)mainFeatureMetricsData;
-(id)initWithStartPosition:(unsigned long long)arg1 mainFeatureMetricsData:(id)arg2 ;
-(void)addRollInfoItems:(id)arg1 ;
-(void)setRollItems:(NSMutableArray *)arg1 ;
-(unsigned long long)startPosition;
-(void)setStartPosition:(unsigned long long)arg1 ;
-(id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2 ;
-(id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2 ;
@end

