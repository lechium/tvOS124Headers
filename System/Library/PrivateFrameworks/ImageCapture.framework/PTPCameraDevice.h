/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {

	void* _ptpCameraProperties;

}

@property (readonly) PTPInitiator * initiator; 
-(void)enumerateContent;
-(BOOL)eject;
-(id)initWithUSBLocationID:(unsigned)arg1 ;
-(void)addToEventHandlerQ:(id)arg1 ;
-(PTPInitiator *)initiator;
-(void)dealloc;
@end
