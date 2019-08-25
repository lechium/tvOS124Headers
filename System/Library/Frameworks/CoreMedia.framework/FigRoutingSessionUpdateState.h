/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMedia/CoreMedia-Structs.h>
@class NSObject;

@interface FigRoutingSessionUpdateState : NSObject {

	OpaqueFigRoutingSessionRef _newSession;
	NSObject* _predictionContext;

}

@property (nonatomic,retain) OpaqueFigRoutingSessionRef newSession;              //@synthesize newSession=_newSession - In the implementation block
@property (nonatomic,retain) NSObject * predictionContext;                       //@synthesize predictionContext=_predictionContext - In the implementation block
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(OpaqueFigRoutingSessionRef)newSession;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(NSObject *)predictionContext;
-(void)setPredictionContext:(NSObject *)arg1 ;
-(void)dealloc;
@end

