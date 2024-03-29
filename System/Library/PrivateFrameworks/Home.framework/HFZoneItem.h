/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFItemDeletionProtocol.h>

@class HMZone, HMHome, NSString;

@interface HFZoneItem : HFItem <NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol> {

	HMZone* _zone;
	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMZone * zone;                                    //@synthesize zone=_zone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)na_identity;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)hf_canDeleteItem;
-(id)hf_deleteItem;
-(id)initWithHome:(id)arg1 zone:(id)arg2 ;
-(void)setZone:(HMZone *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(HMZone *)zone;
-(unsigned long long)hash;
-(NSString *)description;
@end

