/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest {

	BOOL _devSigned;
	NSArray* _certificates;
	NSString* _prerequisiteIdentifier;

}

@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                               //@synthesize devSigned=_devSigned - In the implementation block
@property (nonatomic,copy) NSString * prerequisiteIdentifier;              //@synthesize prerequisiteIdentifier=_prerequisiteIdentifier - In the implementation block
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSArray *)certificates;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSString *)prerequisiteIdentifier;
-(void)setPrerequisiteIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
@end

