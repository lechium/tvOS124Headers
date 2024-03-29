/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPredicate, NSArray;

@interface _DKTombstoneRequirement : NSObject {

	NSString* _identifier;

}

@property (readonly) NSPredicate * predicate; 
@property (readonly) NSPredicate * eventPredicate; 
@property (readonly) NSArray * propertiesToFetch; 
@property (readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
+(id)requirement;
-(NSArray *)propertiesToFetch;
-(NSPredicate *)eventPredicate;
-(void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2 ;
-(void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2 ;
-(NSString *)identifier;
-(NSPredicate *)predicate;
@end

