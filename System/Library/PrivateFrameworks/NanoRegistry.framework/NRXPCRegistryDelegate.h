/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRXPCRegistryDelegate
@required
-(void)xpcGetDeviceCollectionWithBlock:(/*^block*/id)arg1;
-(void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(BOOL)arg2 withBlock:(/*^block*/id)arg3;
-(void)xpcRetrieveSecureProperties:(id)arg1 block:(/*^block*/id)arg2;
-(void)xpcGetChangeHistoryWithBlock:(/*^block*/id)arg1;
-(void)xpcSwitchIndex:(/*^block*/id)arg1;
-(void)xpcDeviceIDAtSwitchIndex:(unsigned)arg1 withBlock:(/*^block*/id)arg2;
-(void)xpcClientInfo:(/*^block*/id)arg1;
-(void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(/*^block*/id)arg3;
-(void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(/*^block*/id)arg3;

@end

