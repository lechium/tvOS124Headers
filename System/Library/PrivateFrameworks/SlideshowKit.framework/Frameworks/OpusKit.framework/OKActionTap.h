/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionTapExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionTap : OKAction <OKActionTapExports, NSSecureCoding> {

	unsigned long long _tapCount;

}

@property (assign,nonatomic) unsigned long long tapCount;              //@synthesize tapCount=_tapCount - In the implementation block
+(void)setupJavascriptContext:(id)arg1 ;
+(id)tapActionWithLocation:(CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tapCount;
-(void)setTapCount:(unsigned long long)arg1 ;
@end
