/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGEventEnrichment;
@class PGTitleTuple, PHAsset, PHAssetCollection;

@interface PGCollectionTitleGenerator : NSObject {

	id<PGEventEnrichment> _collection;
	PGTitleTuple* _titleTuple;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;

}

@property (nonatomic,retain) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) PGTitleTuple * titleTuple;                               //@synthesize titleTuple=_titleTuple - In the implementation block
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(id<PGEventEnrichment>)collection;
-(id)initWithCollection:(id)arg1 ;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)curatedAssetCollection;
-(void)_generateTitleTuples;
-(id)_meaningLabelForTitle;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(id)_sortedMeaningLabels;
-(PGTitleTuple *)titleTuple;
-(void)setCollection:(id<PGEventEnrichment>)arg1 ;
-(void)setTitleTuple:(PGTitleTuple *)arg1 ;
@end

