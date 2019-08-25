/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationStateObserver <NSObject>
@optional
-(void)stateManager:(id)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
-(void)stateManager:(id)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
-(void)stateManager:(id)arg1 didUpdateIsInVehicle:(BOOL)arg2;
-(void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
-(void)stateManagerPredictingDidArrive:(id)arg1;

@end
