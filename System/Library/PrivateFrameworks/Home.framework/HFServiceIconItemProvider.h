/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class NSString, HMHome, NSSet;

@interface HFServiceIconItemProvider : HFItemProvider {

	NSString* _serviceType;
	NSString* _serviceSubtype;
	HMHome* _home;
	NSSet* _iconItems;

}

@property (nonatomic,copy) NSSet * iconItems;                      //@synthesize iconItems=_iconItems - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;              //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HMHome * home;                      //@synthesize home=_home - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(HMHome *)home;
-(id)reloadItems;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3 ;
-(NSSet *)iconItems;
-(void)setIconItems:(NSSet *)arg1 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
@end

