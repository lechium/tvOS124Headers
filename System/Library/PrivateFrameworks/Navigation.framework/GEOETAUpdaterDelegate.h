/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOETAUpdaterDelegate <NSObject>
@optional
-(BOOL)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4;
-(void)etaUpdaterRequestCompleted:(id)arg1;

@required
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2;
-(void)etaUpdaterUpdatedETA:(id)arg1;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;

@end

