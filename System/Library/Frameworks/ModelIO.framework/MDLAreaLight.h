/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@interface MDLAreaLight : MDLPhysicallyPlausibleLight {

	float _areaRadius;
	float _aspect;
	 _superEllipticPower;

}

@property (assign,nonatomic) float areaRadius;                 //@synthesize areaRadius=_areaRadius - In the implementation block
@property (assign,nonatomic)  superEllipticPower;              //@synthesize superEllipticPower=_superEllipticPower - In the implementation block
@property (assign,nonatomic) float aspect;                     //@synthesize aspect=_aspect - In the implementation block
-(void)setAreaRadius:(float)arg1 ;
-(void)setAspect:(float)arg1 ;
-(void)setSuperEllipticPower:;
-(float)areaRadius;
-()superEllipticPower;
-(float)aspect;
-(id)init;
@end

