/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AMSSQLitePropertyPredicate : AMSSQLitePredicate <NSCopying> {

	NSString* _property;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(NSString *)property;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

