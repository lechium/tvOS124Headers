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

@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	unsigned char _systemGesturePossible;
	unsigned char _swipe;
	unsigned short _initialFingerCount;
	unsigned short _currentFingerCount;
	unsigned _eventType;
	unsigned _handIdentity;
	unsigned _handIndex;
	unsigned _handEventMask;
	unsigned _additionalHandEventFlagsForGeneratedEvents;
	NSArray* _paths;
	CGPoint _handPosition;

}

@property (assign,nonatomic) unsigned char swipe;                                              //@synthesize swipe=_swipe - In the implementation block
@property (assign,nonatomic) unsigned eventType;                                               //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned short initialFingerCount;                                //@synthesize initialFingerCount=_initialFingerCount - In the implementation block
@property (assign,nonatomic) unsigned short currentFingerCount;                                //@synthesize currentFingerCount=_currentFingerCount - In the implementation block
@property (nonatomic,retain) NSArray * paths;                                                  //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) unsigned char systemGesturePossible;                              //@synthesize systemGesturePossible=_systemGesturePossible - In the implementation block
@property (assign,nonatomic) unsigned handIdentity;                                            //@synthesize handIdentity=_handIdentity - In the implementation block
@property (assign,nonatomic) unsigned handIndex;                                               //@synthesize handIndex=_handIndex - In the implementation block
@property (assign,nonatomic) CGPoint handPosition;                                             //@synthesize handPosition=_handPosition - In the implementation block
@property (nonatomic,readonly) BOOL isStylus; 
@property (assign,nonatomic) unsigned handEventMask;                                           //@synthesize handEventMask=_handEventMask - In the implementation block
@property (assign,nonatomic) unsigned additionalHandEventFlagsForGeneratedEvents;              //@synthesize additionalHandEventFlagsForGeneratedEvents=_additionalHandEventFlagsForGeneratedEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)representationWithHandInfo:(SCD_Struct_AX3*)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(void)setInitialFingerCount:(unsigned short)arg1 ;
-(void)setCurrentFingerCount:(unsigned short)arg1 ;
-(void)setSwipe:(unsigned char)arg1 ;
-(void)setSystemGesturePossible:(unsigned char)arg1 ;
-(unsigned short)initialFingerCount;
-(unsigned short)currentFingerCount;
-(unsigned char)swipe;
-(unsigned char)systemGesturePossible;
-(unsigned)handIdentity;
-(void)setHandIdentity:(unsigned)arg1 ;
-(CGPoint)handPosition;
-(void)setHandPosition:(CGPoint)arg1 ;
-(unsigned)handIndex;
-(void)setHandIndex:(unsigned)arg1 ;
-(unsigned)handEventMask;
-(void)setHandEventMask:(unsigned)arg1 ;
-(id)accessibilityEventRepresentationTabularDescription;
-(void)writeToHandInfo:(SCD_Struct_AX3*)arg1 ;
-(BOOL)isStylus;
-(unsigned)additionalHandEventFlagsForGeneratedEvents;
-(void)setAdditionalHandEventFlagsForGeneratedEvents:(unsigned)arg1 ;
-(unsigned long long)length;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

