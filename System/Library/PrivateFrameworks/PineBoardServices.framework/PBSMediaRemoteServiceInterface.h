/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSMediaRemoteServiceInterface <NSObject>
@property (nonatomic,readonly) BOOL volumeControlAvailable; 
@property (nonatomic,readonly) BOOL reliableTVAVRPowerControlAvailable; 
@required
-(id)showPinDialogWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dismissPinDialogWithToken:(id)arg1;
-(void)startSiriWithContext:(id)arg1;
-(void)stopSiriWithContext:(id)arg1;
-(void)activateSiriWithContext:(id)arg1;
-(void)noteUserPresenceDetected;
-(BOOL)reliableTVAVRPowerControlAvailable;
-(BOOL)volumeControlAvailable;

@end

