/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _CATProxyWaitToken : NSObject {

	AB mFinished;
	NSObject*<OS_dispatch_group> mGroup;
	BOOL _isExclusive;
	id _resourceProxy;

}

@property (nonatomic,readonly) BOOL isExclusive;              //@synthesize isExclusive=_isExclusive - In the implementation block
@property (nonatomic,readonly) id resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
-(id)initWithExclusive:(BOOL)arg1 group:(id)arg2 ;
-(void)notifyWithResourceProxy:(id)arg1 ;
-(id)resourceProxy;
-(void)dealloc;
-(void)invalidate;
-(void)cancel;
-(BOOL)isExclusive;
@end

