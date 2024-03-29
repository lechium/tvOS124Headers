/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataBoolEntry : _UIStatusBarDataEntry {

	BOOL _boolValue;

}

@property (assign,nonatomic) BOOL boolValue;              //@synthesize boolValue=_boolValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithBoolValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)boolValue;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setBoolValue:(BOOL)arg1 ;
-(id)initFromData:(const SCD_Struct_UI86*)arg1 type:(int)arg2 boolValue:(BOOL)arg3 ;
@end

