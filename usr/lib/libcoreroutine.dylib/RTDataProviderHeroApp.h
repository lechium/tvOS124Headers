/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTDataProvider.h>
#import <libobjc.A.dylib/RTDataProviderProtocol.h>

@class CLLocation, RTLocationManager, RTApplicationManager, NSString;

@interface RTDataProviderHeroApp : RTDataProvider <RTDataProviderProtocol> {

	CLLocation* _mostRecentLocation;
	RTLocationManager* _locationManager;
	RTApplicationManager* _applicationManager;

}

@property (nonatomic,retain) CLLocation * mostRecentLocation;                        //@synthesize mostRecentLocation=_mostRecentLocation - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTApplicationManager * applicationManager;              //@synthesize applicationManager=_applicationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(id)supportedEventClasses;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchPredictedApplications:(/*^block*/id)arg1 ;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)onLeechedLocation:(id)arg1 ;
-(RTApplicationManager *)applicationManager;
-(CLLocation *)mostRecentLocation;
-(id)initWithPurgeManager:(id)arg1 locationManager:(id)arg2 applicationManager:(id)arg3 ;
-(void)onHeroAppNotification:(id)arg1 ;
-(void)_onHeroAppNotification:(id)arg1 ;
-(void)_onLeechedLocation:(id)arg1 ;
-(void)setMostRecentLocation:(CLLocation *)arg1 ;
-(void)setApplicationManager:(RTApplicationManager *)arg1 ;
-(id)init;
-(void)dealloc;
@end

