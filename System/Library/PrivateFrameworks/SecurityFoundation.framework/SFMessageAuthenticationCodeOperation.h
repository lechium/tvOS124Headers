/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFSigningOperation.h>

@class NSString, _SFKeySpecifier;

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation> {

	id _messageAuthenticationCodeOperationInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * signingKeySpecifier; 
+(id)_defaultMacOperation;
+(BOOL)supportsSecureCoding;
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

