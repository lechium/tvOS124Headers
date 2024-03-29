/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTEventFilter.h>

@class NSString, JSContext, NSError, NSOperationQueue;

@interface MTJSContextEventFilter : NSObject <MTEventFilter> {

	NSString* _script;
	NSString* _functionName;
	JSContext* _jsContext;
	NSError* _lastError;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSString * script;                              //@synthesize script=_script - In the implementation block
@property (nonatomic,retain) NSString * functionName;                        //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) JSContext * jsContext;                          //@synthesize jsContext=_jsContext - In the implementation block
@property (nonatomic,retain) NSError * lastError;                            //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)lastError;
-(void)setJsContext:(JSContext *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
-(id)apply:(id)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(id)initWithJSContext:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3 ;
-(void)_applyFilter:(id)arg1 promise:(id)arg2 ;
-(id)initWithScript:(id)arg1 functionName:(id)arg2 operationQueue:(id)arg3 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(NSString *)script;
-(void)setScript:(NSString *)arg1 ;
-(JSContext *)jsContext;
@end

