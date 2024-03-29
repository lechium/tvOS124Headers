/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXClientDelegateProtocol <NSObject>
@required
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

