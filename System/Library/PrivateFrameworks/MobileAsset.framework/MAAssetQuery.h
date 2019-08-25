/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableArray, NSString, NSArray, NSSet;

@interface MAAssetQuery : NSObject {

	BOOL _augmentState;
	NSDate* _postedDate;
	NSMutableArray* _queryParams;
	NSString* _assetType;
	NSArray* _results;
	NSSet* _assetIds;
	long long _returnTypes;
	NSDate* _lastFetchDate;

}

@property (nonatomic,readonly) NSMutableArray * queryParams;              //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) BOOL augmentState;                         //@synthesize augmentState=_augmentState - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                      //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSArray * results;                         //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSSet * assetIds;                          //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,readonly) long long returnTypes;                     //@synthesize returnTypes=_returnTypes - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchDate;                    //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) NSDate * postedDate;                       //@synthesize postedDate=_postedDate - In the implementation block
-(BOOL)augmentState;
-(long long)returnTypes;
-(long long)addKeyValueArray:(id)arg1 with:(id)arg2 ;
-(void)getResultsFromMessage:(id)arg1 ;
-(void)returnTypes:(long long)arg1 ;
-(long long)addKeyValuePair:(id)arg1 with:(id)arg2 ;
-(long long)queryInstalledAssetIds;
-(NSDate *)postedDate;
-(NSSet *)assetIds;
-(NSString *)assetType;
-(long long)queryMetaDataSync;
-(NSDate *)lastFetchDate;
-(void)augmentResultsWithState:(BOOL)arg1 ;
-(NSMutableArray *)queryParams;
-(void)queryMetaData:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithType:(id)arg1 ;
-(NSArray *)results;
@end
