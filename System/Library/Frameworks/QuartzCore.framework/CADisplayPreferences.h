/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying> {

	CADisplayPreferencesPriv* _priv;

}

@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,copy) NSString * preferredHdrMode; 
@property (nonatomic,readonly) int _preferredHdrType; 
-(BOOL)matchContent;
-(NSString *)preferredHdrMode;
-(int)_preferredHdrType;
-(id)initWithMatchContent:(BOOL)arg1 preferredHdrType:(int)arg2 ;
-(id)initWithPreferences:(id)arg1 ;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)setPreferredHdrMode:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

