/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, MSVXPCTransaction, ATDeviceSettings, ATSession, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _checkRestoreStatusQueue;
	BOOL _cancelled;
	BOOL _iTunesRestoreActive;
	BOOL _iCloudRestoreActive;
	BOOL _deviceRestoreActive;
	MSVXPCTransaction* _xpcTransaction;
	ATDeviceSettings* _settings;
	ATSession* _restoreSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
-(void)restoreSessionActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkActiveRestoreStateWithCompletion:(/*^block*/id)arg1 ;
-(id)_dataClasses;
-(BOOL)_iCloudPhotoLibraryEnabled;
-(void)setRestoreInProgress:(BOOL)arg1 ;
-(id)init;
-(void)_start;
-(void)resume;
@end

