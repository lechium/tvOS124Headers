/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSDKManagedDeviceDelegate, OS_xpc_object;
@class NSObject;

@interface MSDKManagedDevice : NSObject {

	id<MSDKManagedDeviceDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;

}

@property (retain) NSObject*<OS_xpc_object> connection;                                  //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<MSDKManagedDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(BOOL)setupConnection;
-(void)handleMessage:(id)arg1 ;
-(BOOL)isDeviceClassSupported;
-(int)readDemoMode;
-(id)getCacheIdentifier;
-(void)handleContentUpdateStatus:(const char*)arg1 event:(id)arg2 ;
-(id)errorWithXPCDictionary:(id)arg1 ;
-(BOOL)prepareWithWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)isContentFrozen;
-(BOOL)lockDemoContent;
-(BOOL)unlockDemoContent;
-(BOOL)unenroll:(BOOL)arg1 ;
-(id)getDeviceOptions;
-(id)getStoreID;
-(BOOL)configureWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)storeDataBlob:(id)arg1 ;
-(id)retrieveDataBlob;
-(BOOL)deleteDataBlob;
-(BOOL)isEnrolled;
-(BOOL)isContentFrozen_xpc;
-(id)init;
-(void)setDelegate:(id<MSDKManagedDeviceDelegate>)arg1 ;
-(id<MSDKManagedDeviceDelegate>)delegate;
-(BOOL)prepare;
-(BOOL)cancelOperation;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

