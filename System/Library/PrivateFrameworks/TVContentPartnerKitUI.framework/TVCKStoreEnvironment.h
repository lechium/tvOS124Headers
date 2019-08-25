/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVCKStoreEnvironment : NSObject {

	NSString* _environment;
	NSString* _build;
	NSString* _branch;
	NSString* _stringData;

}

@property (retain) NSString * environment;              //@synthesize environment=_environment - In the implementation block
@property (retain) NSString * build;                    //@synthesize build=_build - In the implementation block
@property (retain) NSString * branch;                   //@synthesize branch=_branch - In the implementation block
@property (retain) NSString * stringData;               //@synthesize stringData=_stringData - In the implementation block
@property (readonly) BOOL isProduction; 
-(NSString *)build;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setBuild:(NSString *)arg1 ;
-(void)setBranch:(NSString *)arg1 ;
-(void)setStringData:(NSString *)arg1 ;
-(id)initWithEnvironmentDictionary:(id)arg1 ;
-(NSString *)branch;
-(NSString *)stringData;
-(id)initWithStorePage:(id)arg1 ;
-(BOOL)isProduction;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)environment;
@end

