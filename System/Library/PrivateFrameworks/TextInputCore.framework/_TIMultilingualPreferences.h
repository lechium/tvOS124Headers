/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIMultilingualPreferenceProviding.h>

@class TIInputMode, NSArray, NSString;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
+(id)inputModesForIdentifiers:(id)arg1 ;
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;
@end

