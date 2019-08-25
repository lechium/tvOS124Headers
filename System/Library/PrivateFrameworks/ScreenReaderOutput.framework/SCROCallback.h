/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface SCROCallback : NSObject <NSSecureCoding> {

	int _key;
	id<NSSecureCoding> _object;
	BOOL _isAtomic;

}
+(BOOL)supportsSecureCoding;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(BOOL)isAtomic;
-(void)postToHandler:(id)arg1 ;
-(void)setIsAtomic:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)object;
-(int)key;
@end
