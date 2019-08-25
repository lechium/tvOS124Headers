/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLink <NSObject>
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate; 
@required
-(unsigned long long)maximumBatchSize;
-(void)prioritizeAsset:(id)arg1;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
-(BOOL)canEnqueueAsset:(id)arg1;
-(void)cancelAssets:(id)arg1;
-(BOOL)linkIsReady;
-(BOOL)isOpen;
-(void)setDelegate:(id)arg1;
-(id<ATAssetLinkDelegate>)delegate;
-(unsigned long long)priority;
-(BOOL)open;
-(void)close;

@end

