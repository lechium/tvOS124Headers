/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PHAPredicateValidator : NSObject {

	NSSet* _allowedKeyPaths;

}

@property (retain) NSSet * allowedKeyPaths;              //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateExpression:(id)arg1 error:(id*)arg2 ;
-(NSSet *)allowedKeyPaths;
-(void)setAllowedKeyPaths:(NSSet *)arg1 ;
@end

