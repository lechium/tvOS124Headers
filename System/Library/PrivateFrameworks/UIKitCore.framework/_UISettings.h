/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface _UISettings : PTSettings
+(id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2 ;
+(id)_dictionaryForColor:(id)arg1 ;
+(id)_dictionaryForFont:(id)arg1 ;
+(id)_colorFromDictionary:(id)arg1 ;
+(id)_fontFromDictionary:(id)arg1 ;
+(BOOL)_supportsArchivingCustomClass:(Class)arg1 ;
+(BOOL)_supportsArchivingStructType:(id)arg1 ;
+(id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2 ;
+(id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2 ;
+(id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2 ;
+(id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2 ;
-(id)initWithDefaultValues;
-(void)setValuesFromModel:(id)arg1 ;
-(BOOL)archiveToFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFromArchiveFile:(id)arg1 error:(id*)arg2 ;
@end

