/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFAccessoryVendor.h>

@class NSString;

@interface HFHomeKitTransformItem : HFTransformItem <HFHomeKitItemProtocol, HFAccessoryVendor>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol> sourceHomeKitItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id<HFHomeKitObject>)homeKitObject;
-(HFItem*<HFHomeKitItemProtocol>)sourceHomeKitItem;
-(id)accessories;
@end

