/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVCaptureSession, NSString, NSMutableArray;

@interface AVCaptureOutputInternal : NSObject {

	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;
	AVCaptureSession* session;
	NSString* sinkID;
	NSMutableArray* connections;
	int changeSeed;
	CGAffineTransform metadataTransform;
	double rollAdjustment;
	BOOL physicallyMirrorsVideo;

}
-(id)init;
-(void)dealloc;
@end

