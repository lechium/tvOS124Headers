/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, _NSProgressFraction, NSString;

@interface NSProgressValues : NSObject <NSSecureCoding> {

	NSMutableDictionary* _userInfo;
	_NSProgressFraction* _selfFraction;
	_NSProgressFraction* _childFraction;
	double _remoteFractionCompleted;
	NSString* _localizedDescription;
	NSString* _localizedAdditionalDescription;
	BOOL _isCancellable;
	BOOL _isPausable;
	BOOL _isCancelled;
	BOOL _isPaused;
	BOOL _usingChildUserInfo;
	NSString* _kind;
	BOOL _isPrioritizable;
	long long _portionOfParent;

}
+(id)decodableClasses;
+(id)_importantKeys;
+(BOOL)supportsSecureCoding;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(id)overallFraction;
-(void)setFractionCompleted:(double)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(void)setFinished:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(BOOL)isIndeterminate;
-(double)fractionCompleted;
-(void)setTotalUnitCount:(long long)arg1 ;
-(BOOL)isFinished;
@end

