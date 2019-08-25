/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@class SFSymmetricEncryptionOperation;

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {

	id _cmacOperationInternal;

}

@property (nonatomic,copy) SFSymmetricEncryptionOperation * encryptionOperation; 
-(SFSymmetricEncryptionOperation *)encryptionOperation;
-(id)initWithEncryptionOperation:(id)arg1 ;
-(void)setEncryptionOperation:(SFSymmetricEncryptionOperation *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

