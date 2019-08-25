/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFLocationManagerObserver.h>

@protocol HFLocationSensingCoordinatorDelegate;
@class NSUserDefaults, HFLocationManagerDispatcher, NAFuture, NSString;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver> {

	int _defaultsChangedNotifyToken;
	id<HFLocationSensingCoordinatorDelegate> _delegate;
	NSUserDefaults* _defaults;
	HFLocationManagerDispatcher* _locationDispatcher;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                                             //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) HFLocationManagerDispatcher * locationDispatcher;                      //@synthesize locationDispatcher=_locationDispatcher - In the implementation block
@property (assign,nonatomic) int defaultsChangedNotifyToken;                                        //@synthesize defaultsChangedNotifyToken=_defaultsChangedNotifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<HFLocationSensingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL homeSensingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)_defaultsDidChange;
-(BOOL)homeSensingEnabled;
-(void)setLocationDispatcher:(HFLocationManagerDispatcher *)arg1 ;
-(HFLocationManagerDispatcher *)locationDispatcher;
-(int)defaultsChangedNotifyToken;
-(NAFuture *)locationSensingAvailableFuture;
-(void)setHomeSensingEnabled:(BOOL)arg1 ;
-(void)setDefaultsChangedNotifyToken:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<HFLocationSensingCoordinatorDelegate>)arg1 ;
-(id<HFLocationSensingCoordinatorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

