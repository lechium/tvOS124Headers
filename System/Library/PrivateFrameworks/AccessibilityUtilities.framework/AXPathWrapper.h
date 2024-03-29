/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXPathWrapper : NSObject <NSSecureCoding> {

	CGPathRef _path;

}

@property (assign,nonatomic) CGPathRef path;              //@synthesize path=_path - In the implementation block
+(id)currentSharedInstance;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(CGPathRef)path;
@end

