/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppleAccount/AppleAccount-Structs.h>
@class NSObject;

@interface AAAttestationSigner : NSObject {

	NSObject*<OS_dispatch_queue> _attestationQueue;

}
+(id)sharedSigner;
-(id)_signatureForData:(id)arg1 withReferenceKey:(SecKeyRef)arg2 error:(id*)arg3 ;
-(id)_attestationWithCertificates:(id)arg1 error:(id*)arg2 ;
-(void)signaturesForDatas:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signatureForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end

