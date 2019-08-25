/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreSiriBackgroundConnectionDelegate
@required
-(void)siriBackgroundConnection:(id)arg1 willStartWithConnectionType:(id)arg2;
-(void)siriBackgroundConnectionDidClose:(id)arg1;
-(void)siriBackgroundConnection:(id)arg1 didEncounterError:(id)arg2 analysisInfo:(id)arg3;
-(void)siriBackgroundConnection:(id)arg1 didOpenWithConnectionType:(id)arg2 routeId:(id)arg3 delay:(double)arg4;
-(void)siriBackgroundConnection:(id)arg1 didReceiveAceObject:(id)arg2;
-(void)siriBackgroundConnection:(id)arg1 didEncounterIntermediateError:(id)arg2;

@end
