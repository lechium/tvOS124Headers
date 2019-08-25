/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>

@class NSMutableDictionary, NSString;

@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver> {

	NSMutableDictionary* _objectCaches;

}

@property (nonatomic,retain) NSMutableDictionary * objectCaches;              //@synthesize objectCaches=_objectCaches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(id)valueForObject:(id)arg1 key:(id)arg2 invalidationReasons:(unsigned long long)arg3 recalculationBlock:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)objectCaches;
-(void)setObjectCaches:(NSMutableDictionary *)arg1 ;
-(void)_clearCachedValues;
-(id)init;
@end

