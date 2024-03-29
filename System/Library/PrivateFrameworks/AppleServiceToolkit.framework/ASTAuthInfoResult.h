/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload {

	NSData* _attestation;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
+(id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2 ;
+(id)authInfoResultWithAttestation:(id)arg1 ;
-(id)generatePayload;
-(NSData *)attestation;
-(void)setAttestation:(NSData *)arg1 ;
@end

