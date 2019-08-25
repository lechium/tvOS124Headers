/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (readonly) NSArray * devices; 
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
-(NSArray *)devices;
-(id)internalDevices;
-(BOOL)isBrowsing;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)stop;
-(int)start;
@end
