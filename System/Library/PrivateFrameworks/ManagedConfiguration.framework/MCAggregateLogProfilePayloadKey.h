/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogKey {

	Class _payloadClass;
	NSString* _nameSuffix;

}

@property (assign,nonatomic,__weak) Class payloadClass;              //@synthesize payloadClass=_payloadClass - In the implementation block
@property (nonatomic,retain) NSString * nameSuffix;                  //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)payloadClass:(Class)arg1 name:(id)arg2 ;
-(void)setPayloadClass:(Class)arg1 ;
-(Class)payloadClass;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(id)name;
-(unsigned long long)value;
@end
