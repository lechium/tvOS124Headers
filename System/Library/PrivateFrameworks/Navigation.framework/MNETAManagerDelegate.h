/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNETAManagerDelegate <NSObject>
@optional
-(void)etaManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;

@required
-(void)etaManagerUpdatedETATime:(id)arg1;
-(void)etaManager:(id)arg1 willSendETARequest:(id)arg2;
-(void)etaManager:(id)arg1 receivedETAResponse:(id)arg2;
-(void)etaManager:(id)arg1 failedToReceiveETAResponse:(id)arg2;
-(void)etaManager:(id)arg1 updatedIncidentsForRoute:(id)arg2 etaRoute:(id)arg3 incidentsOffset:(unsigned)arg4;
-(void)etaManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
-(void)etaManager:(id)arg1 updatedTrafficForETARoute:(id)arg2 from:(unsigned)arg3 to:(unsigned)arg4;

@end
