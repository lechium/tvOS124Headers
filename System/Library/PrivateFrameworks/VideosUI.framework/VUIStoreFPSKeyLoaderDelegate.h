/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIStoreFPSKeyLoaderDelegate <NSObject>
@optional
-(void)storeFPSKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
-(void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
-(void)storeFPSKeyLoader:(id)arg1 willSucceedForKeyRequest:(id)arg2;
-(void)storeFPSKeyLoader:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
-(BOOL)storeFPSKeyLoader:(id)arg1 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)arg2;

@end

