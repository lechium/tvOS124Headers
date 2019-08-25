/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMImplementation.h>
#import <libobjc.A.dylib/IKJSDOMImplementationLS.h>

@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>

@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
-(id)createDocument:(id)arg1 :(id)arg2 ;
-(id)createLSParser:(long long)arg1 :(id)arg2 ;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;
-(long long)synchronousMode;
@end

