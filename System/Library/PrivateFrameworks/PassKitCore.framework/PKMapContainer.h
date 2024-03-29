/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PKMapContainer : NSObject <NSSecureCoding> {

	NSMutableDictionary* _recipientMap;
	NSMutableDictionary* _scoreMap;
	long long _version;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * recipientMap;              //@synthesize recipientMap=_recipientMap - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * scoreMap;                  //@synthesize scoreMap=_scoreMap - In the implementation block
@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableDictionary *)recipientMap;
-(NSMutableDictionary *)scoreMap;
-(void)updateWithContainer:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeAllObjects;
-(long long)version;
@end

