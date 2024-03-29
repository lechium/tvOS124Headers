/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSSoftwareDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,readonly) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(void)restart;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(ASDJob *)job;
-(id)failureError;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)assetsForType:(id)arg1 ;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)downloadSizeLimit;
-(id)downloadPhaseIdentifier;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)removeAsset:(id)arg1 ;
-(double)percentComplete;
-(id)status;
-(void)resume;
-(id)valueForProperty:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)pause;
@end

