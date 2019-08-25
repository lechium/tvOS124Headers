/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPassOwnershipToken : NSObject {

	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;              //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ownershipToken; 
+(void)queryKeychainForOwnershipTokens:(/*^block*/id)arg1 ;
+(void)deleteAllLocalKeychainOwnershipTokens;
-(NSString *)ownershipTokenIdentifier;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_readFromKeychain;
-(void)_writeToKeychain;
-(void)deleteTokenFromLocalKeychain;
-(id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2 ;
-(NSString *)ownershipToken;
-(void)setOwnershipToken:(NSString *)arg1 ;
-(void)deleteTokenFromKeychain;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
@end

