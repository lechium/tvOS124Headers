/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAEquatable.h>

@protocol HFAggregatedCharacteristicValueSource;
@class NSString;

@interface HFCharacteristicStateItem : HFItem <NAEquatable> {

	NSString* _characteristicType;
	id<HFAggregatedCharacteristicValueSource> _valueSource;
	/*^block*/id _resultsProvider;

}

@property (nonatomic,copy,readonly) id resultsProvider;                                            //@synthesize resultsProvider=_resultsProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * characteristicType;                                 //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,readonly) id<HFAggregatedCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HFAggregatedCharacteristicValueSource>)valueSource;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithCharacteristicType:(id)arg1 valueSource:(id)arg2 resultsProvider:(/*^block*/id)arg3 ;
-(id)resultsProvider;
-(NSString *)characteristicType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

