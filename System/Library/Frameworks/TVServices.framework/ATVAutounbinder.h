/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface ATVAutounbinder : NSObject {

	NSMapTable* _bindingsByObject;
	BOOL _assertOnRetainEnabled;

}
-(void)_assertIllegalRetain;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)removeBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)_notifyBindingAdaptors;
-(void)_enableAssertOnRetain;
-(id)init;
-(void)dealloc;
-(id)retain;
@end

