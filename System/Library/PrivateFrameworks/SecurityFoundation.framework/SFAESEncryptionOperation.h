/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFSymmetricEncryptionOperation.h>

@class _SFAESKeySpecifier;

@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation {

	id _aesEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFAESKeySpecifier * encryptionKeySpecifier; 
-(id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
