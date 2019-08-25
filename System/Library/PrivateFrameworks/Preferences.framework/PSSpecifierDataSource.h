/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierDataSource.h>

@protocol PSSpecifierDataSource <NSObject>
@required
+(id)sharedInstance;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;

@end


@class NSMutableSet, NSMutableArray, NSString;

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource> {

	NSMutableSet* _observerRefs;
	BOOL _specifiersLoaded;
	NSMutableArray* _specifiers;

}

@property (nonatomic,readonly) NSMutableArray * specifiers;              //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4 ;
+(id)sharedInstance;
-(NSMutableArray *)specifiers;
-(void)reloadSpecifiers;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(id)observersOfClass:(Class)arg1 ;
-(void)enumerateObserversOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)areSpecifiersLoaded;
-(void)loadSpecifiers;
-(void)_clearAllSpecifiers;
-(void)_invalidateSpecifiersForObservers;
-(void)performUpdates:(id)arg1 ;
-(void)performUpdatesAnimated:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)observers;
-(void)addObserver:(id)arg1 ;
@end
