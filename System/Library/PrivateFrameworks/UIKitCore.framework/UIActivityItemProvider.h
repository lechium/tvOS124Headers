/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <Foundation/NSOperation.h>
#import <UIKit/UIActivityItemSource.h>

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {

	id _placeholderItem;
	NSString* _activityType;
	id _providedItem;

}

@property (nonatomic,retain) id placeholderItem;                                          //@synthesize placeholderItem=_placeholderItem - In the implementation block
@property (nonatomic,retain) id providedItem;                                             //@synthesize providedItem=_providedItem - In the implementation block
@property (setter=_setActivityType:,nonatomic,copy) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) id item; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)item;
-(NSString *)activityType;
-(void)main;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)placeholderItem;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)setPlaceholderItem:(id)arg1 ;
-(void)setProvidedItem:(id)arg1 ;
-(id)providedItem;
-(BOOL)_shouldExecuteItemOperationForActivity:(id)arg1 ;
-(void)_setActivityType:(id)arg1 ;
@end

