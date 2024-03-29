/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
@class NSString;

@interface DKComponentPredicate : NSObject {

	BOOL _exactMatch;
	NSString* _type;
	NSString* _identifier;
	NSString* _domain;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL exactMatch;                    //@synthesize exactMatch=_exactMatch - In the implementation block
+(id)componentPredicateWithDomain:(NSString*)arg1 exactMatch:(BOOL)arg2 ;
+(id)componentPredicateWithType:(NSString*)arg1 identifier:(NSString*)arg2 ;
+(id)componentPredicateMatchingComponentIdentity:(id)arg1 ;
-(BOOL)matchesComponentIdentity:(id)arg1 ;
-(id)initWithDomain:(NSString*)arg1 exactMatch:(BOOL)arg2 ;
-(BOOL)exactMatch;
-(BOOL)isEqualToComponentPredicate:(id)arg1 ;
-(id)initWithType:(NSString*)arg1 identifier:(NSString*)arg2 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(NSString *)domain;
@end

