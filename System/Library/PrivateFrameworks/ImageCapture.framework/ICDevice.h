/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class DeviceManager, NSString;

@interface ICDevice : NSObject {

	void* _deviceProperties;

}

@property (assign) DeviceManager * deviceManager; 
@property (copy) NSString * name; 
@property (copy) NSString * productKind; 
@property (copy) NSString * transportType; 
@property (copy) NSString * UUIDString; 
@property (assign) BOOL hasOpenSession; 
@property (assign) BOOL autoOpenSession; 
@property (assign) BOOL openSessionPending; 
@property (assign) BOOL closeSessionPending; 
@property (assign) int usbLocationID; 
@property (assign) int usbProductID; 
@property (assign) int usbVendorID; 
@property (readonly) BOOL isAppleDevice; 
@property (assign) id<ICDeviceDelegate> delegate; 
@property (readonly) CGImageRef icon; 
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(BOOL)isAppleDevice;
-(DeviceManager *)deviceManager;
-(void)setDeviceManager:(DeviceManager *)arg1 ;
-(NSString *)productKind;
-(void)setProductKind:(NSString *)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(int)usbVendorID;
-(void)setUsbVendorID:(int)arg1 ;
-(BOOL)hasOpenSession;
-(void)setHasOpenSession:(BOOL)arg1 ;
-(BOOL)autoOpenSession;
-(void)setAutoOpenSession:(BOOL)arg1 ;
-(BOOL)openSessionPending;
-(void)setOpenSessionPending:(BOOL)arg1 ;
-(BOOL)closeSessionPending;
-(void)setCloseSessionPending:(BOOL)arg1 ;
-(void)requestOpenSession;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setDelegate:(id<ICDeviceDelegate>)arg1 ;
-(id<ICDeviceDelegate>)delegate;
-(NSString *)UUIDString;
-(CGImageRef)icon;
-(id)valueForUndefinedKey:(id)arg1 ;
@end

