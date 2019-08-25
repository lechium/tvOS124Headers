/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFInterstitialProviderDelegate;
@class NSObject, AFInterstitialConfiguration, NSMutableArray, NSString;

@interface AFInterstitialProvider : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	AFInterstitialConfiguration* _configuration;
	NSMutableArray* _pendingActions;
	id _context;
	id<AFInterstitialProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 recordRoute:(id)arg2 isVoiceTrigger:(BOOL)arg3 isDucking:(BOOL)arg4 isTwoShot:(BOOL)arg5 speechEndHostTime:(unsigned long long)arg6 context:(id)arg7 delegate:(id)arg8 ;
-(void)_performNextAction;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
@end
