/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinder.h>
#import <libobjc.A.dylib/FigCameraViewfinderRemoteObjectCallbacks.h>

@protocol OS_dispatch_queue, FigCameraViewfinderRemoteObject;
@class NSMapTable, FigStateMachine, FigNSXPCConnection, NSObject, NSString;

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks> {

	NSMapTable* _weakSessionTable;
	FigStateMachine* _stateMachine;
	FigNSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionManagementQueue;
	id<FigCameraViewfinderRemoteObject> _remoteViewfinder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cameraViewfinder;
+(id)remoteObjectCallbacksInterface;
+(void)initialize;
-(void)_setupStateMachine;
-(void)startWithOptions:(id)arg1 ;
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1 ;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(id)arg1 ;
-(void)_teardownXPCConnectionAndRemoteViewfinder;
-(void)_handleServerDeathWithOptions:(id)arg1 reconnect:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)stop;
@end
