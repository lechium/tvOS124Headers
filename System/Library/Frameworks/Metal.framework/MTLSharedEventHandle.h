/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {

	MTLSharedEventHandlePrivate* _priv;

}

@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(unsigned)eventPort;
-(unsigned long long)labelTraceID;
-(id)initWithSharedEvent:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
@end
