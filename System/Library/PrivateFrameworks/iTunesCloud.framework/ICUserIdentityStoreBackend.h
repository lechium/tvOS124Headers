/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)synchronize;

@end
