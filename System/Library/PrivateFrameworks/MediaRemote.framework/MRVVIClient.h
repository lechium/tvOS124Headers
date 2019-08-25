/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRVVIClient : NSObject {

	NSMutableDictionary* _deviceIDToCallbackMap;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedClient;
-(void)setRecordingStateCallback:(/*^block*/id)arg1 forDeviceID:(unsigned)arg2 ;
-(void)_recordingStateChangedNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

