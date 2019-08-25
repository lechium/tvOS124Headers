/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface OBStagedMetric : NSObject {

	unsigned _metricId;
	PBCodable* _metric;

}

@property (assign) unsigned metricId;               //@synthesize metricId=_metricId - In the implementation block
@property (retain) PBCodable * metric;              //@synthesize metric=_metric - In the implementation block
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
-(void)setMetricId:(unsigned)arg1 ;
-(id)initWithMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)commit;
@end
