/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWSSnapshotSource;

@interface NWSSnapshotter : NSObject {

	unsigned long long _kernelSourceRef;
	NWSSnapshotSource* _snapshotSource;

}

@property (assign) unsigned long long kernelSourceRef;              //@synthesize kernelSourceRef=_kernelSourceRef - In the implementation block
@property (retain) NWSSnapshotSource * snapshotSource;              //@synthesize snapshotSource=_snapshotSource - In the implementation block
-(unsigned long long)kernelSourceRef;
-(void)setKernelSourceRef:(unsigned long long)arg1 ;
-(NWSSnapshotSource *)snapshotSource;
-(void)setSnapshotSource:(NWSSnapshotSource *)arg1 ;
-(id)snapshot;
@end

