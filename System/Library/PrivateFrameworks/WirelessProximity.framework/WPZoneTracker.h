/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPZoneTrackerDelegate;
@interface WPZoneTracker : WPClient {

	BOOL _wantEntry;
	BOOL _wantExit;
	id<WPZoneTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPZoneTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantEntry;                                         //@synthesize wantEntry=_wantEntry - In the implementation block
@property (assign,nonatomic) BOOL wantExit;                                          //@synthesize wantExit=_wantExit - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)failedToRegisterZones:(id)arg1 withError:(id)arg2 ;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2 ;
-(void)exitedZone:(id)arg1 ;
-(void)fetchedCurrentlyTrackedZones:(id)arg1 ;
-(BOOL)wantExit;
-(void)setWantEntry:(BOOL)arg1 ;
-(void)setWantExit:(BOOL)arg1 ;
-(BOOL)wantEntry;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(void)unregisterAllZoneChanges;
-(void)getCurrentTrackedZones;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)description;
-(void)setDelegate:(id<WPZoneTrackerDelegate>)arg1 ;
-(id<WPZoneTrackerDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
@end

