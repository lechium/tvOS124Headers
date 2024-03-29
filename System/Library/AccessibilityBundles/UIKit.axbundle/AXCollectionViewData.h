/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject {

	NSMutableDictionary* _children;
	long long _childCount;

}

@property (assign,nonatomic) long long childCount;                          //@synthesize childCount=_childCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;              //@synthesize children=_children - In the implementation block
-(long long)childCount;
-(void)setChildCount:(long long)arg1 ;
-(id)init;
-(id)description;
-(NSMutableDictionary *)children;
@end

