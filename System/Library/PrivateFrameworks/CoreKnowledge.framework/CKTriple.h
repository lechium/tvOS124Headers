/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKTriple : NSObject <NSSecureCoding> {

	 value;

}

@property (readonly,nonatomic) NSString * subject; 
@property (readonly,nonatomic) NSString * predicate; 
@property (readonly,nonatomic) NSString * object; 
@property (readonly,nonatomic) long long weight; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long hash; 
+(BOOL)supportsSecureCoding;
-(id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(NSString *)object;
-(NSString *)predicate;
-(long long)weight;
-(NSString *)subject;
@end

