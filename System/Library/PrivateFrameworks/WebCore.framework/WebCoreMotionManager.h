/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class CMMotionManager, CLLocationManager, NSTimer;

@interface WebCoreMotionManager : NSObject {

	CMMotionManager* m_motionManager;
	CLLocationManager* m_locationManager;
	HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> >* m_deviceMotionClients;
	HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> >* m_deviceOrientationClients;
	NSTimer* m_updateTimer;
	BOOL m_gyroAvailable;
	BOOL m_headingAvailable;
	BOOL m_initialized;

}
+(id)sharedManager;
-(void)addMotionClient:(DeviceMotionClientIOS*)arg1 ;
-(void)removeMotionClient:(DeviceMotionClientIOS*)arg1 ;
-(BOOL)gyroAvailable;
-(void)addOrientationClient:(DeviceOrientationClientIOS*)arg1 ;
-(void)removeOrientationClient:(DeviceOrientationClientIOS*)arg1 ;
-(void)initializeOnMainThread;
-(void)checkClientStatus;
-(void)sendMotionData:(id)arg1 withHeading:(id)arg2 ;
-(void)sendAccelerometerData:(id)arg1 ;
-(BOOL)headingAvailable;
-(id)init;
-(void)dealloc;
-(void)update;
@end

