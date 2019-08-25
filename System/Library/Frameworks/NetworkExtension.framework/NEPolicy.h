/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEPolicyResult, NSArray;

@interface NEPolicy : NSObject <NEPrettyDescription> {

	unsigned _order;
	NEPolicyResult* _result;
	NSArray* _conditions;

}

@property (assign) unsigned order;                       //@synthesize order=_order - In the implementation block
@property (retain) NEPolicyResult * result;              //@synthesize result=_result - In the implementation block
@property (copy) NSArray * conditions;                   //@synthesize conditions=_conditions - In the implementation block
-(void)setResult:(NEPolicyResult *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithOrder:(unsigned)arg1 result:(id)arg2 conditions:(id)arg3 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(id)init;
-(id)description;
-(void)setOrder:(unsigned)arg1 ;
-(unsigned)order;
-(NEPolicyResult *)result;
-(BOOL)validate;
@end

