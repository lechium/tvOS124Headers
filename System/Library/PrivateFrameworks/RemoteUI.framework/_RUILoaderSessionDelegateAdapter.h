/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol NSURLSessionTaskDelegate;
@class NSObject, NSString;

@interface _RUILoaderSessionDelegateAdapter : NSObject <NSURLSessionTaskDelegate> {

	NSObject*<NSURLSessionTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<NSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDelegate:(NSObject*<NSURLSessionTaskDelegate>)arg1 ;
-(NSObject*<NSURLSessionTaskDelegate>)delegate;
@end

