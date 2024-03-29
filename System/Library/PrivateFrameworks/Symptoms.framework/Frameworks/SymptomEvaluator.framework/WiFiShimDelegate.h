/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate <NSObject>
@optional
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg1 forInterface:(id)arg2;
-(void)wifiShim_AWDLLinkUp:(BOOL)arg1;
-(void)wifiShim_InfraAdminDisable:(id)arg1 bssid:(id)arg2;

@end

