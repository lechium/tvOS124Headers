/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFItemBuilderItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@protocol HFServiceLikeItem;
@class HFAccessoryBuilder, HFItem, NSString;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {

	HFAccessoryBuilder* _accessoryBuilder;
	HFItem*<HFServiceLikeItem> _accessoryItem;

}

@property (nonatomic,retain) HFAccessoryBuilder * accessoryBuilder;                      //@synthesize accessoryBuilder=_accessoryBuilder - In the implementation block
@property (nonatomic,retain) HFItem*<HFServiceLikeItem> accessoryItem;                   //@synthesize accessoryItem=_accessoryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2 ;
-(void)setAccessoryBuilder:(HFAccessoryBuilder *)arg1 ;
-(void)setAccessoryItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFAccessoryBuilder *)accessoryBuilder;
-(HFItem*<HFServiceLikeItem>)accessoryItem;
-(id)accessories;
-(id)services;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

