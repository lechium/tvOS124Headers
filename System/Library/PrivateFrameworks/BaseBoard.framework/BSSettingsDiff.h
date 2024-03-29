/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol BSSettingDescriptionProvider;
@class BSMutableSettings, NSMutableSet, NSString;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding> {

	id<BSSettingDescriptionProvider> _descriptionProvider;
	BSMutableSettings* _changes;
	NSMutableSet* _flagRemovals;
	NSMutableSet* _objectRemovals;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<BSSettingDescriptionProvider> descriptionProvider;              //@synthesize descriptionProvider=_descriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3 ;
-(void)_enumerateSettingsInSet:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_diffTypesForSetting:(unsigned long long)arg1 ;
-(void)applyToSettings:(id)arg1 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(id<BSSettingDescriptionProvider>)descriptionProvider;
-(void)setDescriptionProvider:(id<BSSettingDescriptionProvider>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)allSettings;
@end

