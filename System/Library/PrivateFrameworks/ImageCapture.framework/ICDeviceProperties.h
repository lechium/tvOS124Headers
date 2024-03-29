/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject {

	id _delegate;
	DeviceManager* _deviceManager;
	NSString* _name;
	CGImageRef _icon;
	NSString* _productKind;
	NSString* _transportType;
	NSString* _UUIDString;
	int _usbLocationID;
	int _usbProductID;
	int _usbVendorID;
	BOOL _hasOpenSession;
	BOOL _autoOpenSession;
	BOOL _openSessionPending;
	BOOL _closeSessionPending;

}

@property (assign) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign) DeviceManager * deviceManager;              //@synthesize deviceManager=_deviceManager - In the implementation block
@property (retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign) CGImageRef icon; 
@property (retain) NSString * productKind;                     //@synthesize productKind=_productKind - In the implementation block
@property (retain) NSString * transportType;                   //@synthesize transportType=_transportType - In the implementation block
@property (retain) NSString * UUIDString;                      //@synthesize UUIDString=_UUIDString - In the implementation block
@property (assign) int usbLocationID;                          //@synthesize usbLocationID=_usbLocationID - In the implementation block
@property (assign) int usbProductID;                           //@synthesize usbProductID=_usbProductID - In the implementation block
@property (assign) int usbVendorID;                            //@synthesize usbVendorID=_usbVendorID - In the implementation block
@property (assign) BOOL hasOpenSession;                        //@synthesize hasOpenSession=_hasOpenSession - In the implementation block
@property (assign) BOOL autoOpenSession;                       //@synthesize autoOpenSession=_autoOpenSession - In the implementation block
@property (assign) BOOL openSessionPending;                    //@synthesize openSessionPending=_openSessionPending - In the implementation block
@property (assign) BOOL closeSessionPending;                   //@synthesize closeSessionPending=_closeSessionPending - In the implementation block
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
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
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(NSString *)UUIDString;
-(CGImageRef)icon;
-(void)setIcon:(CGImageRef)arg1 ;
@end

