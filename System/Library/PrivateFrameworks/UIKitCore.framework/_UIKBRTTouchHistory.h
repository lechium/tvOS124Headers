/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _UIKBRTTouchHistory : NSObject <NSCopying> {

	NSMutableArray* _history;
	CGPoint _historyOffset;
	double _lastDecayTime;
	BOOL _isLeftHand;

}

@property (nonatomic,readonly) CGPoint historyOffset; 
@property (assign,nonatomic) BOOL isLeftHand;                      //@synthesize isLeftHand=_isLeftHand - In the implementation block
@property (nonatomic,readonly) BOOL hasHistory; 
@property (nonatomic,readonly) double lastTime; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)initWithIsLeftHand:(BOOL)arg1 ;
-(void)setIsLeftHand:(BOOL)arg1 ;
-(void)addInfo:(id)arg1 ;
-(BOOL)isLeftHand;
-(BOOL)containsInfo:(id)arg1 ;
-(void)removeInfo:(id)arg1 ;
-(BOOL)hasHistory;
-(double)lastTime;
-(void)decayHistory;
-(void)clearHistory;
-(CGPoint)historyOffset;
-(void)adjustHistoryOffset:(CGPoint)arg1 ;
-(void)_updateOffset;
-(void)_decayHistoryToSize:(unsigned long long)arg1 ;
-(void)_sortHistory;
@end

