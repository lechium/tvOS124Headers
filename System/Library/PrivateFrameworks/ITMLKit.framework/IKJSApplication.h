/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSApplication.h>
@class NSDictionary;


@protocol IKJSApplication <JSExport>
@property (nonatomic,readonly) NSDictionary * traitCollection; 
@required
-(void)reload:(id)arg1 :(id)arg2;
-(NSDictionary *)traitCollection;

@end

#import <libobjc.A.dylib/_IKJSApplicationProxy.h>

@class NSString, NSDictionary;

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * traitCollection; 
-(void)reload:(id)arg1 :(id)arg2 ;
-(id)asPrivateIKJSApplication;
-(void)launchAppWithOptions:(id)arg1 ;
-(void)suspendAppWithOptions:(id)arg1 ;
-(void)resumeAppWithOptions:(id)arg1 ;
-(void)exitAppWithOptions:(id)arg1 ;
-(void)updatedAppWithOptions:(id)arg1 ;
-(void)traitCollectionChanged:(id)arg1 ;
-(void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3 ;
-(void)openURLWithOptions:(id)arg1 ;
-(void)update;
-(NSDictionary *)traitCollection;
@end

