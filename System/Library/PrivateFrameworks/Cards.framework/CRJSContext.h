/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JavaScriptCore/JSContext.h>

@interface CRJSContext : JSContext
+(id)sharedContext;
-(id)initWithVirtualMachine:(id)arg1 ;
-(void)_createCard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id*)arg4 ;
-(void)evaluateScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
