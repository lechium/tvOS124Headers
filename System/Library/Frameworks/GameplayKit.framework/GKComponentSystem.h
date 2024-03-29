/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface GKComponentSystem : NSObject <NSFastEnumeration> {

	NSMutableArray* _components;
	Class _componentClass;

}

@property (nonatomic,readonly) Class componentClass;                     //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * components; 
-(void)addComponent:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)removeComponentWithEntity:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
-(Class)componentClass;
-(id)initWithComponentClass:(Class)arg1 ;
-(void)addComponentWithEntity:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GK6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSArray *)components;
@end

