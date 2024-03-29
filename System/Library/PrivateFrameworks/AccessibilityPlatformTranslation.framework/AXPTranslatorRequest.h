/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXPTranslationObject, NSDictionary;

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding> {

	AXPTranslationObject* _translation;
	unsigned long long _requestType;
	unsigned long long _attributeType;
	unsigned long long _actionType;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) AXPTranslationObject * translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                  //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                //@synthesize attributeType=_attributeType - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                       //@synthesize parameters=_parameters - In the implementation block
+(id)requestWithTranslation:(id)arg1 ;
+(id)allowedDecodableClasses;
+(BOOL)supportsSecureCoding;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)attributeType;
-(unsigned long long)actionType;
-(void)setActionType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AXPTranslationObject *)translation;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
@end

