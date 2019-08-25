/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface BSPluginSpecification : NSObject {

	NSString* _type;
	NSArray* _whitelistedNames;
	NSString* _classOrProtocolName;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * requiredClassOrProtocolName;              //@synthesize classOrProtocolName=_classOrProtocolName - In the implementation block
+(id)specificationsFromHostBundle:(id)arg1 ;
-(BOOL)matchesPluginBundle:(id)arg1 ;
-(NSString *)requiredClassOrProtocolName;
-(id)initWithPlistSpecification:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)description;
-(NSString *)type;
-(BOOL)isValid;
@end

