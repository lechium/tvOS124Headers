/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFDisambiguationInfo : NSObject <NSSecureCoding> {

	long long _version;
	NSArray* _history;

}

@property (nonatomic,readonly) long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSArray * history;                //@synthesize history=_history - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHistory:(NSArray *)arg1 ;
-(NSArray *)history;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
@end

