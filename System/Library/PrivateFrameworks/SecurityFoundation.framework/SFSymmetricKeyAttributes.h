/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFKeyAttributes.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class _SFKeySpecifier, NSString;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes> {

	id _symmetricKeyAttributesInternal;

}

@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(NSString *)localizedLabel;
-(_SFKeySpecifier *)keySpecifier;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)keyDomain;
-(id)initWithSpecifier:(id)arg1 domain:(NSString*)arg2 ;
-(void)setKeySpecifier:(_SFKeySpecifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
@end

