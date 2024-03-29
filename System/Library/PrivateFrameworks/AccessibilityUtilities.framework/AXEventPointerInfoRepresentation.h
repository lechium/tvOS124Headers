/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	double _pointerX;
	double _pointerY;
	double _pointerZ;
	double _pointerButtonMask;
	double _pointerButtonNumber;
	double _pointerButtonClickCount;
	double _pointerButtonPressure;

}

@property (assign,nonatomic) double pointerX;                             //@synthesize pointerX=_pointerX - In the implementation block
@property (assign,nonatomic) double pointerY;                             //@synthesize pointerY=_pointerY - In the implementation block
@property (assign,nonatomic) double pointerZ;                             //@synthesize pointerZ=_pointerZ - In the implementation block
@property (assign,nonatomic) double pointerButtonMask;                    //@synthesize pointerButtonMask=_pointerButtonMask - In the implementation block
@property (assign,nonatomic) double pointerButtonNumber;                  //@synthesize pointerButtonNumber=_pointerButtonNumber - In the implementation block
@property (assign,nonatomic) double pointerButtonClickCount;              //@synthesize pointerButtonClickCount=_pointerButtonClickCount - In the implementation block
@property (assign,nonatomic) double pointerButtonPressure;                //@synthesize pointerButtonPressure=_pointerButtonPressure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)accessibilityEventRepresentationTabularDescription;
-(void)setPointerX:(double)arg1 ;
-(void)setPointerY:(double)arg1 ;
-(void)setPointerZ:(double)arg1 ;
-(void)setPointerButtonMask:(double)arg1 ;
-(void)setPointerButtonNumber:(double)arg1 ;
-(void)setPointerButtonClickCount:(double)arg1 ;
-(void)setPointerButtonPressure:(double)arg1 ;
-(double)pointerX;
-(double)pointerY;
-(double)pointerZ;
-(double)pointerButtonMask;
-(double)pointerButtonNumber;
-(double)pointerButtonClickCount;
-(double)pointerButtonPressure;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

