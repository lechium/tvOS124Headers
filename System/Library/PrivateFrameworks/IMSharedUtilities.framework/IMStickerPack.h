/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSMutableSet, NSString, NSURL, NSSet;

@interface IMStickerPack : NSObject {

	NSMutableSet* _stickers;
	NSString* _GUID;
	NSString* _name;
	NSURL* _displayAssetURL;
	NSURL* _fileURL;
	NSString* _appBundleIdentifier;
	NSString* _appVersion;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;                  //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSSet * stickers; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * displayAssetURL;                     //@synthesize displayAssetURL=_displayAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                       //@synthesize appVersion=_appVersion - In the implementation block
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
-(id)initWithGUID:(NSString*)arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6 ;
-(id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3 ;
-(NSSet *)stickers;
-(void)addSticker:(id)arg1 ;
-(id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4 ;
-(NSURL *)displayAssetURL;
-(void)setDisplayAssetURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)fileURL;
-(id)dictionaryRepresentation;
@end

