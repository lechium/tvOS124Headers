/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSDictionary, NSMutableDictionary;

@interface TKTokenKeychainItem : NSObject {

	NSData* _accessControl;
	id _objectID;
	NSString* _label;
	NSDictionary* _constraints;
	NSString* _tokenID;

}

@property (copy,readonly) NSMutableDictionary * keychainAttributes; 
@property (copy,readonly) NSData * encodedObjectID; 
@property (retain) NSString * tokenID;                                           //@synthesize tokenID=_tokenID - In the implementation block
@property (retain) NSData * accessControl; 
@property (copy,readonly) id objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (copy) NSDictionary * constraints;                                     //@synthesize constraints=_constraints - In the implementation block
+(id)operationMap;
+(id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id*)arg3 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSString *)tokenID;
-(id)objectID;
-(void)setTokenID:(NSString *)arg1 ;
-(NSData *)encodedObjectID;
-(NSData *)accessControl;
-(void)setAccessControl:(NSData *)arg1 ;
-(NSMutableDictionary *)keychainAttributes;
-(NSDictionary *)constraints;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setConstraints:(NSDictionary *)arg1 ;
@end

