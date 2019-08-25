/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKBTree;

@interface UIKBKeyInterval : NSObject {

	UIKBTree* _key;
	double _interval;

}

@property (nonatomic,retain) UIKBTree * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double interval;              //@synthesize interval=_interval - In the implementation block
-(void)dealloc;
-(UIKBTree *)key;
-(void)setKey:(UIKBTree *)arg1 ;
-(void)setInterval:(double)arg1 ;
-(id)initWithKey:(id)arg1 interval:(double)arg2 ;
-(double)interval;
@end
