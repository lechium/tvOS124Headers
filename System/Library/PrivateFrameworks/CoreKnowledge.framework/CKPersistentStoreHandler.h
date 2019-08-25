/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKPersistentStoreHandler : NSObject {

	 connection;

}
+(id)inMemoryHandler;
-(id)keysAndReturnError:(id*)arg1 ;
-(id)keysMatching:(id)arg1 error:(id*)arg2 ;
-(id)valuesAndReturnError:(id*)arg1 ;
-(id)valuesForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(id)keysAndValuesAndReturnError:(id*)arg1 ;
-(id)keysAndValuesForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(id)_valuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveKeysAndValues:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesMatching:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllValuesAndReturnError:(id*)arg1 ;
-(id)tripleComponentsMatching:(id)arg1 error:(id*)arg2 ;
-(BOOL)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 error:(id*)arg5 ;
-(long long)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 ;
-(long long)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 ;
-(BOOL)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 error:(id*)arg4 ;
-(BOOL)dropLinksWithLabel:(id)arg1 from:(id)arg2 error:(id*)arg3 ;
-(BOOL)dropLinksBetween:(id)arg1 and:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
@end

