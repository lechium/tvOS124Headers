/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject {

	PLDataCluster* _cluster;
	unsigned long long _numberOfItemsToElect;

}

@property (readonly) PLDataCluster * cluster;                              //@synthesize cluster=_cluster - In the implementation block
@property (readonly) unsigned long long numberOfItemsToElect;              //@synthesize numberOfItemsToElect=_numberOfItemsToElect - In the implementation block
-(PLDataCluster *)cluster;
-(id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsToElect;
@end
