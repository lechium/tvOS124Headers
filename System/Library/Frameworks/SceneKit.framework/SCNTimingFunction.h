/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding> {

	C3DTimingFunctionRef _timingFunction;

}
+(id)functionWithTimingMode:(long long)arg1 ;
+(id)functionWithCAMediaTimingFunction:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithTimingFunctionRef:(C3DTimingFunctionRef)arg1 ;
-(C3DTimingFunctionRef)c3dTimingFunction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

