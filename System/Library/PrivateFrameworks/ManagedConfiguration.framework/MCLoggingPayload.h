/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCLoggingPayload : MCPayload {

	NSDictionary* _loggingPayload;

}

@property (nonatomic,readonly) NSDictionary * loggingPayload;              //@synthesize loggingPayload=_loggingPayload - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(BOOL)isAllowedToWriteLogging;
-(NSDictionary *)loggingPayload;
-(id)title;
@end

