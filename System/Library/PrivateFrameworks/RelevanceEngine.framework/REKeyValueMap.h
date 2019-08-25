/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface REKeyValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)keyForValue:(id)arg1 ;
-(unsigned long long)valueCount;
-(void)addKey:(id)arg1 withValue:(id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeKey:(id)arg1 ;
@end
