/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BYBuddyDaemonProximityTargetProtocol <NSObject>
@required
-(void)proximititySetupCompleted:(id)arg1;
-(void)displayProximityPinCode:(id)arg1 visual:(BOOL)arg2;
-(void)dismissProximityPinCode;
-(void)proximityConnectionPreparing:(id)arg1;
-(void)proximityConnectionInitiated;
-(void)proximityConnectionTerminated;
-(void)proximityConnectionReconnected;
-(void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4;

@end

