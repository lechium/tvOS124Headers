/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKClampNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;

}
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
-(id)init;
@end

