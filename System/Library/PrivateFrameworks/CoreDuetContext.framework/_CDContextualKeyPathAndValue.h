/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDContextualKeyPath, _CDContextValue;

@interface _CDContextualKeyPathAndValue : NSObject <NSSecureCoding> {

	_CDContextualKeyPath* _keyPath;
	_CDContextValue* _value;

}

@property (nonatomic,retain) _CDContextualKeyPath * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) _CDContextValue * value;                     //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithKeyPath:(id)arg1 andValue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CDContextValue *)value;
-(void)setValue:(_CDContextValue *)arg1 ;
-(_CDContextualKeyPath *)keyPath;
-(void)setKeyPath:(_CDContextualKeyPath *)arg1 ;
@end

