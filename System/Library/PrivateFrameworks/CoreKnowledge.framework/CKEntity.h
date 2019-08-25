/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKEntity : NSObject {

	 identifier;
	 store;

}

@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
-(BOOL)linkTo:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3 ;
-(void)removeValueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)valueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)linkTo:(id)arg1 withPredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)linksTo:(id)arg1 matchType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)linksTo:(id)arg1 matchType:(long long)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(id)valueForKey:(id)arg1 ;
@end

