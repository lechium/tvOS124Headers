/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class NSArray;

@interface BoxedPhysicsShape : NSObject {

	int shapeType;
	NSArray* points;

}
+(id)boxPhysicsShape:(PKPhysicsShape*)arg1 ;
-(PKPhysicsShape*)unboxShape;
@end

