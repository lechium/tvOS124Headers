/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject {

	NSMutableDictionary* _workInfosByWorkerType;

}

@property (nonatomic,retain) NSMutableDictionary * workInfosByWorkerType;              //@synthesize workInfosByWorkerType=_workInfosByWorkerType - In the implementation block
-(NSMutableDictionary *)workInfosByWorkerType;
-(void)setWorkInfosByWorkerType:(NSMutableDictionary *)arg1 ;
-(void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3 ;
-(id)init;
-(id)snapshot;
@end

