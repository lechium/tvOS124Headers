/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {

	IOSurfaceRef _ioSurface;

}
+(BOOL)supportsSecureCoding;
-(void)setIOSurface:(IOSurfaceRef)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOSurfaceRef)ioSurface;
@end

