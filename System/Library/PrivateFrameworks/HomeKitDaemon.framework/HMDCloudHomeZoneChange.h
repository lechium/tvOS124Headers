/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudZoneChange.h>

@class HMDCloudShareGroupChange;

@interface HMDCloudHomeZoneChange : HMDCloudZoneChange {

	HMDCloudShareGroupChange* _shareGroupChange;

}

@property (nonatomic,retain) HMDCloudShareGroupChange * shareGroupChange;              //@synthesize shareGroupChange=_shareGroupChange - In the implementation block
-(id)changeWithObjectID:(id)arg1 ;
-(id)changeWithRecordName:(id)arg1 ;
-(void)addChangeWithObjectChange:(id)arg1 ;
-(void)addChangeWithRecord:(id)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg1 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(/*^block*/id)arg1 ;
-(BOOL)moreChangesToProcess;
-(void)fetchBatchToUpload:(/*^block*/id)arg1 ;
-(void)setSaveAsProcessedWithRecord:(id)arg1 ;
-(void)resetRecordWithRecordID:(id)arg1 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg1 ;
-(void)flushAllChangesToCache;
-(id)objectChanges;
-(id)initWithZone:(id)arg1 temporaryCache:(BOOL)arg2 ;
-(HMDCloudShareGroupChange *)shareGroupChange;
-(void)setShareGroupChange:(HMDCloudShareGroupChange *)arg1 ;
@end

