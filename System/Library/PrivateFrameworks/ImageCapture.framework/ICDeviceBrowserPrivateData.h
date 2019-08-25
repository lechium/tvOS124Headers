/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {

	id _delegate;
	BOOL _browsing;
	NSMutableArray* _internalDevices;

}

@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBrowsing) BOOL browsing;                      //@synthesize browsing=_browsing - In the implementation block
@property (retain) NSMutableArray * internalDevices;              //@synthesize internalDevices=_internalDevices - In the implementation block
-(NSMutableArray *)internalDevices;
-(void)setInternalDevices:(NSMutableArray *)arg1 ;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

