/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACMPreferencesCFPreferencesBasedStore.h>

@class NSString;

@interface ACMPreferencesCFPreferencesStore : NSObject <ACMPreferencesCFPreferencesBasedStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferencesStoreWithCFPreferences;
-(void)removeAllValues;
-(id)preferencesValueForKey:(id)arg1 ;
-(CFStringRef)preferenceID;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 ;
-(void)setMultiplePreferencesValues:(id)arg1 ;
-(id)multiplePreferencesValuesForKeys:(id)arg1 withOptions:(long long)arg2 ;
-(void)setMultiplePreferencesValues:(id)arg1 withOptions:(long long)arg2 ;
-(id)allValuesWithOptions:(long long)arg1 ;
-(void)replaceAllValues:(id)arg1 withOptions:(long long)arg2 ;
-(void)removeAllValuesWithOptions:(long long)arg1 ;
-(void)savePreferencesIfNeeded;
-(id)preferencesValueForKey:(id)arg1 withOptions:(long long)arg2 ;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 withOptions:(long long)arg3 ;
-(void)cleanupOnMemoryWarning;
-(id)allValues;
-(void)clearCache;
@end

