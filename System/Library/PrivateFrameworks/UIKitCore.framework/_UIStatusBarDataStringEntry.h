/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataStringEntry : _UIStatusBarDataEntry {

	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithStringValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)_ui_descriptionBuilder;
-(id)initFromData:(const SCD_Struct_UI86*)arg1 type:(int)arg2 string:(const char*)arg3 maxLength:(int)arg4 ;
@end

