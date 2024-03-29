/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString;

@interface ATDetailedProgressInfoForAssetType : NSObject {

	NSMutableSet* failedAssetIds;
	unsigned long long _totalBytesToSync;
	unsigned long long _totalBytesSynced;
	unsigned long long _totalAssetsToSync;
	unsigned long long _totalAssetsSynced;
	unsigned long long _failedAssetCount;
	double _progress;
	NSString* _atAssetType;

}

@property (assign,getter=getTotalBytesToSync,nonatomic) unsigned long long totalBytesToSync;                //@synthesize totalBytesToSync=_totalBytesToSync - In the implementation block
@property (assign,getter=getTotalBytesSynced,nonatomic) unsigned long long totalBytesSynced;                //@synthesize totalBytesSynced=_totalBytesSynced - In the implementation block
@property (assign,getter=getTotalAssetsToSync,nonatomic) unsigned long long totalAssetsToSync;              //@synthesize totalAssetsToSync=_totalAssetsToSync - In the implementation block
@property (assign,getter=getTotalAssetsSynced,nonatomic) unsigned long long totalAssetsSynced;              //@synthesize totalAssetsSynced=_totalAssetsSynced - In the implementation block
@property (assign,getter=getFailedAssetsCount,nonatomic) unsigned long long failedAssetCount;               //@synthesize failedAssetCount=_failedAssetCount - In the implementation block
@property (assign,getter=getSyncProgress,nonatomic) double progress;                                        //@synthesize progress=_progress - In the implementation block
@property (getter=getAssetType,nonatomic,retain) NSString * atAssetType;                                    //@synthesize atAssetType=_atAssetType - In the implementation block
+(id)serializedProgressInfoFromATDetailedProgressInfoForAssetType:(id)arg1 ;
-(unsigned long long)getTotalAssetsToSync;
-(unsigned long long)getTotalBytesToSync;
-(unsigned long long)getTotalBytesSynced;
-(void)setTotalBytesSynced:(unsigned long long)arg1 ;
-(void)setTotalBytesToSync:(unsigned long long)arg1 ;
-(void)setTotalAssetsToSync:(unsigned long long)arg1 ;
-(void)updateBytesDownloaded:(unsigned long long)arg1 ;
-(void)_computeProgress;
-(id)getAssetType;
-(unsigned long long)getTotalAssetsSynced;
-(double)getSyncProgress;
-(unsigned long long)getFailedAssetsCount;
-(id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3 ;
-(id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3 assetCountSynced:(unsigned long long)arg4 byteCountSyned:(unsigned long long)arg5 ;
-(void)updateAsset:(id)arg1 syncedWithSuccess:(BOOL)arg2 bytesDownloaded:(unsigned long long)arg3 ;
-(void)updateBytesToDownload:(unsigned long long)arg1 ;
-(void)updateAssetsToDownload:(unsigned long long)arg1 ;
-(void)setTotalAssetsSynced:(unsigned long long)arg1 ;
-(void)setFailedAssetCount:(unsigned long long)arg1 ;
-(void)setAtAssetType:(NSString *)arg1 ;
-(id)description;
-(void)setProgress:(double)arg1 ;
@end

