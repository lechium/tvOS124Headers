/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXTrampoline : NSObject {

	BOOL _warnAboutUnknownSelectors;
	id _caller;
	Class _targetClass;

}

@property (assign,nonatomic,__weak) id caller;                            //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic,__weak) Class targetClass;                    //@synthesize targetClass=_targetClass - In the implementation block
@property (assign,nonatomic) BOOL warnAboutUnknownSelectors;              //@synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors - In the implementation block
+(void)methodDoesNotExistSentinal;
+(id)methodNotFoundSentinal;
+(id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(void)setTargetClass:(Class)arg1 ;
-(Class)targetClass;
-(id)caller;
-(void)setCaller:(id)arg1 ;
-(id)initWithCaller:(id)arg1 targetClass:(Class)arg2 ;
-(BOOL)warnAboutUnknownSelectors;
-(/*function pointer*/void*)_findIMPForSelector:(SEL)arg1 ;
-(BOOL)callerIsClass;
-(void)setWarnAboutUnknownSelectors:(BOOL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

