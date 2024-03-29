/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSArray, NSSet;

@interface CoreCECPhysicalDevice : NSObject {

	NSMutableArray* _children;
	NSMutableSet* _logicalDevices;
	unsigned long long _physicalAddress;
	CoreCECPhysicalDevice* _parent;

}

@property (assign,nonatomic) CoreCECPhysicalDevice * parent;                    //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalAddress;              //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSSet * logicalDevices; 
@property (nonatomic,readonly) id propertyList; 
+(id)physicalDeviceTreeWithLogicalDevices:(id)arg1 ;
-(id)propertyList;
-(void)setParent:(CoreCECPhysicalDevice *)arg1 ;
-(unsigned long long)physicalAddress;
-(NSSet *)logicalDevices;
-(id)initWithPhysicalAddress:(unsigned long long)arg1 ;
-(void)addLogicalDevice:(id)arg1 ;
-(id)initWithLogicalDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(CoreCECPhysicalDevice *)parent;
-(void)addChild:(id)arg1 ;
-(NSArray *)children;
@end

