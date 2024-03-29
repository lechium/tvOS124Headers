/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate {

	NSString* _property;
	NSSet* _values;

}

@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) NSSet * values;                   //@synthesize values=_values - In the implementation block
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(NSString *)property;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSSet *)values;
@end

