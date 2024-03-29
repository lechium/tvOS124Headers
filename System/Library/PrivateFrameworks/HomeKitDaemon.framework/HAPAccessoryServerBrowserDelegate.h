/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPAccessoryServerBrowserDelegate <NSObject>
@required
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4;
-(void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerForReprovisioning:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 didChangeReachability:(BOOL)arg2 forAccessoryServerWithIdentifier:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3;
-(void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2;
-(void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(BOOL)arg5;

@end

