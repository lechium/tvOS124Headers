/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHResourceAvailabilityChangeRequestDelegate.h>
#import <libobjc.A.dylib/PHVideoChoosingAndAvailabilityRequestDelegate.h>

@class NSMutableDictionary, NSString;

@interface PHResourceAvailabilityRequestManager : NSObject <PHResourceAvailabilityChangeRequestDelegate, PHVideoChoosingAndAvailabilityRequestDelegate> {

	os_unfair_lock_s _requestsLock;
	NSMutableDictionary* _requestsByIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)_registerRequest:(id)arg1 ;
-(void)_unregisterRequest:(id)arg1 ;
-(void)_unregisterRequestForTaskIdentifier:(id)arg1 ;
-(void)_availabilityRequestDidFinish:(id)arg1 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4 ;
-(void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6 ;
-(id)_requestWithTaskIdentifier:(id)arg1 ;
-(id)init;
@end

