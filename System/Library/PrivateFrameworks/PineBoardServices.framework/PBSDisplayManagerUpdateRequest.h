/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBSDisplayMode, NSDictionary;

@interface PBSDisplayManagerUpdateRequest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _writeDisplayModeToDisk;
	BOOL _upgradeDisplayModeToNonVirtual;
	BOOL _treatDisplayModeAsFallback;
	BOOL _useDisplayModeAsDefaultForNextWake;
	PBSDisplayMode* _displayMode;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PBSDisplayMode * displayMode;                       //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) BOOL writeDisplayModeToDisk;                          //@synthesize writeDisplayModeToDisk=_writeDisplayModeToDisk - In the implementation block
@property (assign,nonatomic) BOOL upgradeDisplayModeToNonVirtual;                  //@synthesize upgradeDisplayModeToNonVirtual=_upgradeDisplayModeToNonVirtual - In the implementation block
@property (assign,nonatomic) BOOL treatDisplayModeAsFallback;                      //@synthesize treatDisplayModeAsFallback=_treatDisplayModeAsFallback - In the implementation block
@property (assign,nonatomic) BOOL useDisplayModeAsDefaultForNextWake;              //@synthesize useDisplayModeAsDefaultForNextWake=_useDisplayModeAsDefaultForNextWake - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDisplayMode:(id)arg1 ;
-(BOOL)writeDisplayModeToDisk;
-(BOOL)upgradeDisplayModeToNonVirtual;
-(BOOL)treatDisplayModeAsFallback;
-(BOOL)useDisplayModeAsDefaultForNextWake;
-(id)initWithDisplayMode:(id)arg1 userInfo:(id)arg2 ;
-(void)setWriteDisplayModeToDisk:(BOOL)arg1 ;
-(void)setUpgradeDisplayModeToNonVirtual:(BOOL)arg1 ;
-(void)setTreatDisplayModeAsFallback:(BOOL)arg1 ;
-(void)setUseDisplayModeAsDefaultForNextWake:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PBSDisplayMode *)displayMode;
@end
