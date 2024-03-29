/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextRange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITextKitTextPosition, UITextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {

	_UITextKitTextPosition* _start;
	_UITextKitTextPosition* _end;

}

@property (nonatomic,retain) UITextPosition * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) UITextPosition * end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long affinity; 
+(id)rangeWithRange:(NSRange)arg1 ;
+(id)rangeWithRange:(NSRange)arg1 affinity:(long long)arg2 ;
+(id)rangeWithStart:(id)arg1 end:(id)arg2 ;
+(id)defaultRange;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UITextPosition *)start;
-(BOOL)isEmpty;
-(void)setStart:(UITextPosition *)arg1 ;
-(UITextPosition *)end;
-(void)setEnd:(UITextPosition *)arg1 ;
-(long long)affinity;
-(NSRange)asRange;
@end

