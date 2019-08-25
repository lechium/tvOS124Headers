/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSTerminationContext : NSObject <BSXPCCoding, NSCopying> {

	long long _exceptionCode;
	unsigned long long _reportType;
	NSString* _explanation;

}

@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (assign,nonatomic) unsigned long long reportType;              //@synthesize reportType=_reportType - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)terminationAssertionContext;
+(id)context;
-(BOOL)isEqualToTerminationContext:(id)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(unsigned long long)arg1 ;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(unsigned long long)reportType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

