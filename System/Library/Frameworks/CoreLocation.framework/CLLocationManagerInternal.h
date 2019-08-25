/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationManagerStateTracker, NSString, NSMutableSet;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	CLLocationManagerStateTracker* fState;
	SCD_Struct_CL3 fLocation;
	NSString* fLocationEventType;
	CFRunLoopTimerRef fLocationRequestTimer;
	double fLocationRequestTimeout;
	CFRunLoopTimerRef fRangingRequestTimer;
	double fLastRangingRequestTimeout;
	unsigned long long fLastRangingRequestMachTime;
	int fHeadingOrientation;
	NSMutableSet* fRangedRegions;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(BOOL)hasLingeringRangingRequest;
-(void)cancelRangingRequest;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)stopUpdatingLocationAutoPaused;
-(void)cancelLocationRequest;
-(void)cancelLingeringRangingRequest;
-(void)performCourtesyPromptIfNeeded;
-(NSMutableSet *)rangedRegions;
-(void)dealloc;
@end

