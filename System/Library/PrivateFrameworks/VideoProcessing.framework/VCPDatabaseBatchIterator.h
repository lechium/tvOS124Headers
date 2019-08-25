/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPDatabaseReader, NSArray, NSSet, NSDictionary, PHAsset;

@interface VCPDatabaseBatchIterator : NSObject {

	VCPDatabaseReader* _reader;
	NSArray* _assets;
	NSSet* _resultsTypes;
	int _batchSize;
	int _idxLast;
	int _idxCurrent;
	NSDictionary* _batchAnalyses;
	PHAsset* _asset;
	NSDictionary* _analysis;

}

@property (nonatomic,readonly) PHAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSDictionary * analysis;              //@synthesize analysis=_analysis - In the implementation block
+(id)iteratorForAssets:(id)arg1 withDatabaseReader:(id)arg2 resultTypes:(id)arg3 batchSize:(int)arg4 ;
-(void)nextBatch;
-(BOOL)next;
-(id)initWithDatabaseReader:(id)arg1 forAssets:(id)arg2 resultsTypes:(id)arg3 batchSize:(int)arg4 ;
-(NSDictionary *)analysis;
-(PHAsset *)asset;
@end

