/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class NSObject;

@interface IMDDController : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;

}
+(id)sharedInstance;
-(void)scanMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)scanMessage:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2 ;
-(DDScannerRef)sharedScanner;
-(id)scannerQueue;
-(id)init;
@end

