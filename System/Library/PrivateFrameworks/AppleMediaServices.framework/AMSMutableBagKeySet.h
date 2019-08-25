/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet {

	NSMutableSet* _mutableKeys;

}

@property (nonatomic,retain) NSMutableSet * mutableKeys;              //@synthesize mutableKeys=_mutableKeys - In the implementation block
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)unionBagKeySet:(id)arg1 ;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableKeys;
-(id)init;
-(id)keys;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

