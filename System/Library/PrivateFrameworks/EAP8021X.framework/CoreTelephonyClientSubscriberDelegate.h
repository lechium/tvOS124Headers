/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EAP8021X.framework/EAP8021X
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientSubscriberDelegate <NSObject>
@optional
-(void)simStatusDidChange:(id)arg1 status:(id)arg2;
-(void)simLockSaveRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
-(void)simPinChangeRequestDidComplete:(id)arg1 success:(BOOL)arg2;
-(void)authTokenChanged:(id)arg1;
-(void)shortLabelsDidChange;
-(void)subscriberCountryCodeDidChange:(id)arg1;

@end

