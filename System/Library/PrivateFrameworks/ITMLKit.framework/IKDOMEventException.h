/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMEventException.h>

@interface IKDOMEventException : IKJSObject <IKJSDOMEventException> {

	long long code;

}

@property (assign,nonatomic) long long code; 
+(id)exceptionWithAppContext:(id)arg1 code:(long long)arg2 ;
-(void)setCode:(long long)arg1 ;
-(long long)code;
@end
