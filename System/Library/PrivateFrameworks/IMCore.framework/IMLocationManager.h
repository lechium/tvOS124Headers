/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <IMCore/IMLocationManager.h>
@class CLLocation, NSError;


@protocol IMLocationManager <NSObject>
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSError * error; 
@required
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1;
-(BOOL)locationAuthorizationDenied;
-(CLLocation *)location;
-(NSError *)error;

@end


@class CLLocation, NSError, CLLocationManager, NSMutableArray, NSTimer, NSDate, NSString;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {

	CLLocationManager* _locationManager;
	NSMutableArray* _handlers;
	NSTimer* _timeoutHandler;
	CLLocation* _location;
	NSError* _error;
	NSDate* _locateStartTime;
	NSTimer* _locationUpdateTimer;

}

@property (nonatomic,retain) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * locationUpdateTimer;                    //@synthesize locationUpdateTimer=_locationUpdateTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDate * locateStartTime;                         //@synthesize locateStartTime=_locateStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
+(id)locationShifter;
+(Class)__CLLocationManagerClass;
+(id)sharedInstance;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(NSMutableArray *)handlers;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(BOOL)locationAuthorizationDenied;
-(NSTimer *)locationUpdateTimer;
-(void)setLocationUpdateTimer:(NSTimer *)arg1 ;
-(void)setLocateStartTime:(NSDate *)arg1 ;
-(void)_locationUpdateTimerFired:(id)arg1 ;
-(void)_fireCompletionHandlers;
-(void)_locationManagerTimedOut;
-(NSDate *)locateStartTime;
-(BOOL)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2 ;
-(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(CLLocationManager *)locationManager;
-(id)init;
-(void)dealloc;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

