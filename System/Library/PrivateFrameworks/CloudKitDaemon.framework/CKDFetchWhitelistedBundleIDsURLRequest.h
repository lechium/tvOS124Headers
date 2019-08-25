/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest {

	/*^block*/id _bundleIDsFetchedBlock;

}

@property (nonatomic,copy) id bundleIDsFetchedBlock;              //@synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock - In the implementation block
-(id)sourceApplicationBundleIdentifier;
-(BOOL)requiresTokenRegistration;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setBundleIDsFetchedBlock:(id)arg1 ;
-(id)bundleIDsFetchedBlock;
-(int)operationType;
@end

