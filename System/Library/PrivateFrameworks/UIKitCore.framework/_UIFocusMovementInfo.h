/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding> {

	BOOL _isInitialMovement;
	BOOL _isVelocityBased;
	_UIFocusMovementInfo* _primaryMovementInfo;
	_UIFocusMovementInfo* _secondaryMovementInfo;
	unsigned long long _heading;
	unsigned long long _secondaryHeading;
	CGVector _velocity;

}

@property (assign,setter=_setHeading:,nonatomic) unsigned long long heading;                                                         //@synthesize heading=_heading - In the implementation block
@property (assign,setter=_setSecondaryHeading:,getter=_secondaryHeading,nonatomic) unsigned long long secondaryHeading;              //@synthesize secondaryHeading=_secondaryHeading - In the implementation block
@property (assign,setter=_setVelocity:,getter=_velocity,nonatomic) CGVector velocity;                                                //@synthesize velocity=_velocity - In the implementation block
@property (assign,setter=_setIsInitialMovement:,getter=_isInitialMovement,nonatomic) BOOL isInitialMovement;                         //@synthesize isInitialMovement=_isInitialMovement - In the implementation block
@property (assign,setter=_setIsVelocityBased:,getter=_isVelocityBased,nonatomic) BOOL isVelocityBased;                               //@synthesize isVelocityBased=_isVelocityBased - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementInfo * primaryMovementInfo;                                                           //@synthesize primaryMovementInfo=_primaryMovementInfo - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementInfo * secondaryMovementInfo;                                                         //@synthesize secondaryMovementInfo=_secondaryMovementInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_movementWithHeading:(unsigned long long)arg1 isInitial:(BOOL)arg2 ;
+(id)_movementWithVelocity:(CGVector)arg1 isInitial:(BOOL)arg2 ;
+(id)_movementWithHeading:(unsigned long long)arg1 velocity:(CGVector)arg2 isInitial:(BOOL)arg3 ;
+(id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(CGVector)arg3 isInitial:(BOOL)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setVelocity:(CGVector)arg1 ;
-(CGVector)_velocity;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)_setHeading:(unsigned long long)arg1 ;
-(void)_setIsInitialMovement:(BOOL)arg1 ;
-(void)_setIsVelocityBased:(BOOL)arg1 ;
-(void)_setSecondaryHeading:(unsigned long long)arg1 ;
-(unsigned long long)heading;
-(unsigned long long)_secondaryHeading;
-(BOOL)_isInitialMovement;
-(BOOL)_isVelocityBased;
-(_UIFocusMovementInfo *)primaryMovementInfo;
-(_UIFocusMovementInfo *)secondaryMovementInfo;
@end

