/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMDaemonCore/IMDaemonCore-Structs.h>
@interface IMDCKCacheDeleteManager : NSObject {

	BOOL _alreadyCapturedErrorWithAutoBugCapture;
	BOOL _allowsWritingToDisk;
	BOOL _deviceLowOnDiskSpace;
	BOOL _isUpdatingAttachmentFileSizes;

}

@property (assign,nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture;                          //@synthesize alreadyCapturedErrorWithAutoBugCapture=_alreadyCapturedErrorWithAutoBugCapture - In the implementation block
@property (assign,nonatomic) BOOL allowsWritingToDisk;                                             //@synthesize allowsWritingToDisk=_allowsWritingToDisk - In the implementation block
@property (assign,getter=isDeviceLowOnDiskSpace,nonatomic) BOOL deviceLowOnDiskSpace;              //@synthesize deviceLowOnDiskSpace=_deviceLowOnDiskSpace - In the implementation block
@property (assign) BOOL isUpdatingAttachmentFileSizes;                                             //@synthesize isUpdatingAttachmentFileSizes=_isUpdatingAttachmentFileSizes - In the implementation block
+(id)sharedInstance;
-(long long)purgeAttachments:(long long)arg1 ;
-(BOOL)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(BOOL)arg2 ;
-(BOOL)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(BOOL)arg2 ;
-(BOOL)isUpdatingAttachmentFileSizes;
-(void)setIsUpdatingAttachmentFileSizes:(BOOL)arg1 ;
-(BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1 ;
-(void)_cacheDeleteSetUp;
-(id)_ckUtilitiesSharedInstance;
-(id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2 ;
-(id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2 ;
-(void)setDeviceLowOnDiskSpace:(BOOL)arg1 ;
-(id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2 ;
-(id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4 ;
-(void)setAllowsWritingToDisk:(BOOL)arg1 ;
-(BOOL)allowsWritingToDisk;
-(long long)_purgeableSpaceGivenUrgency:(int)arg1 ;
-(long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1 ;
-(long long)purgeableAttachmentSize;
-(id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2 ;
-(id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2 ;
-(id)_fileTransfersToDelete:(CFArrayRef)arg1 ;
-(long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1 ;
-(void)_postTransferInfoOfDeletedTransfers:(id)arg1 ;
-(id)_fileTransfersToValidate:(CFArrayRef)arg1 ;
-(void)_fetchTransfersFromCloudKit:(id)arg1 ;
-(void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2 ;
-(unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3 ;
-(BOOL)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2 ;
-(void)updateAttachmentFileSizesWithActivity:(id)arg1 ;
-(void)registerWithCacheDelete;
-(void)metricAttachmentsToPurge:(long long)arg1 ;
-(BOOL)alreadyCapturedErrorWithAutoBugCapture;
-(void)setAlreadyCapturedErrorWithAutoBugCapture:(BOOL)arg1 ;
-(BOOL)isDeviceLowOnDiskSpace;
-(id)init;
@end

