/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationTrackerDelegate <NSObject>
@optional
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2;
-(void)locationTrackerDidArrive:(id)arg1;
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
-(void)locationTracker:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4;
-(void)locationTrackerWillReroute:(id)arg1;
-(void)locationTrackerDidCancelReroute:(id)arg1;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
-(void)locationTracker:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
-(void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
-(void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
-(void)locationTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
-(void)locationTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;

@end

