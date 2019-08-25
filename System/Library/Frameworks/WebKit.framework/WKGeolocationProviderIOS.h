/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKGeolocationProviderIOS : NSObject {

	RefPtr<WebKit::WebGeolocationManagerProxy, WTF::DumbPtrTraits<WebKit::WebGeolocationManagerProxy> >* _geolocationManager;
	RetainPtr<id<_WKGeolocationCoreLocationProvider> >* _coreLocationProvider;
	BOOL _isWebCoreGeolocationActive;
	RefPtr<WebKit::WebGeolocationPosition, WTF::DumbPtrTraits<WebKit::WebGeolocationPosition> >* _lastActivePosition;
	Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16>* _requestsWaitingForCoreLocationAuthorization;

}
-(void)_stopUpdating;
-(void)_startUpdating;
-(id)initWithProcessPool:(WebProcessPool*)arg1 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(SecurityOrigin*)arg1 frame:(WebFrameProxy*)arg2 completionHandler:(Function<void (bool)>*)arg3 view:(id)arg4 ;
-(void)_setEnableHighAccuracy:(BOOL)arg1 ;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(id)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
-(id)init;
@end

