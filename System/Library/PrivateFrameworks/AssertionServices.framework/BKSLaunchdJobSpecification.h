/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface BKSLaunchdJobSpecification : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	NSString* _labelPrefix;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _executablePath;
	NSArray* _arguments;
	NSArray* _machServices;
	NSDictionary* _environment;
	NSString* _standardOutput;
	NSString* _standardError;
	unsigned long long _executionOptions;

}

@property (nonatomic,copy) NSString * labelPrefix;                             //@synthesize labelPrefix=_labelPrefix - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                              //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * executablePath;                          //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSArray * machServices;                             //@synthesize machServices=_machServices - In the implementation block
@property (nonatomic,copy) NSDictionary * environment;                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * standardOutput;                          //@synthesize standardOutput=_standardOutput - In the implementation block
@property (nonatomic,copy) NSString * standardError;                           //@synthesize standardError=_standardError - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;              //@synthesize executionOptions=_executionOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specification;
+(BOOL)supportsSecureCoding;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setStandardOutput:(NSString *)arg1 ;
-(void)setStandardError:(NSString *)arg1 ;
-(NSString *)standardOutput;
-(NSString *)standardError;
-(NSString *)labelPrefix;
-(NSArray *)machServices;
-(unsigned long long)executionOptions;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setLabelPrefix:(NSString *)arg1 ;
-(void)setMachServices:(NSArray *)arg1 ;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(NSArray *)arguments;
-(void)setExecutablePath:(NSString *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)environment;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)executablePath;
@end

